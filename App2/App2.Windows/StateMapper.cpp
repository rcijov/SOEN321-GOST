#include "pch.h"
#include "StateMapper.h"

using namespace App2;

StateMapper::StateMapper(StateMapper^ other)
{
	currentStep = Step::STEP_1;
	_2_gN = ref new Platform::Collections::Vector<Platform::String^> ();
	_2_N = ref new Platform::Collections::Vector<Platform::String^> ();
	_2_EPSILON = ref new Platform::Collections::Vector<Platform::String^> ();
	
	_3_gN = ref new Platform::Collections::Vector<Platform::String^> ();
	_3_N = ref new Platform::Collections::Vector<Platform::String^> ();
	_3_EPSILON = ref new Platform::Collections::Vector<Platform::String^> ();

	_2_L = ref new Platform::Collections::Vector<Platform::String^>();
	_2_P = ref new Platform::Collections::Vector<Platform::String^>();
	_2_S = ref new Platform::Collections::Vector<Platform::String^>();
	_2_E = ref new Platform::Collections::Vector<Platform::String^>();

	_3_L = ref new Platform::Collections::Vector<Platform::String^>();
	_3_P = ref new Platform::Collections::Vector<Platform::String^>();
	_3_S = ref new Platform::Collections::Vector<Platform::String^>();
	_3_E = ref new Platform::Collections::Vector<Platform::String^>();
};

StateMapper::StateMapper()
{
	currentStep = Step::STEP_1;
	_2_gN = ref new Platform::Collections::Vector<Platform::String^>();
	_2_N = ref new Platform::Collections::Vector<Platform::String^>();
	_2_EPSILON = ref new Platform::Collections::Vector<Platform::String^>();

	_3_gN = ref new Platform::Collections::Vector<Platform::String^>();
	_3_N = ref new Platform::Collections::Vector<Platform::String^>();
	_3_EPSILON = ref new Platform::Collections::Vector<Platform::String^>();

	_2_L = ref new Platform::Collections::Vector<Platform::String^>();
	_2_P = ref new Platform::Collections::Vector<Platform::String^>();
	_2_S = ref new Platform::Collections::Vector<Platform::String^>();
	_2_E = ref new Platform::Collections::Vector<Platform::String^>();

	_3_L = ref new Platform::Collections::Vector<Platform::String^>();
	_3_P = ref new Platform::Collections::Vector<Platform::String^>();
	_3_S = ref new Platform::Collections::Vector<Platform::String^>();
	_3_E = ref new Platform::Collections::Vector<Platform::String^>();
}

void StateMapper::setStep(Step step)
{
	currentStep = step;
}

void StateMapper::setValue(Value valueIdentifier, unsigned char* value, int length)
{
	switch (currentStep)
	{
	case Step::STEP_1:
		setStep1Value(valueIdentifier, value, length);
		break;
	case Step::STEP_2:
		setStep2Value(valueIdentifier, value, length);
		break;
	case Step::STEP_3:
		setStep3Value(valueIdentifier, value, length);
		break;
	default:
		break;
	}
}

Step StateMapper::getStep()
{
	return currentStep;
}

Platform::String^ StateMapper::convertCharToString(unsigned char* charArray, int length)
{
	Platform::String^ stringValue;
	std::stringstream ss;

	for (size_t i = 0; i < length; i++)
	{
		stringValue += charArray[i].ToString();
	}

	return stringValue;
}

void StateMapper::setStep1Value(Value valueIdentifier, unsigned char* value, int length)
{
	switch (valueIdentifier)
	{
	case Value::INIT_H:
		_initialHash    = convertCharToString(value, length);
		break;
	case Value::INIT_N:
		_initialN       = convertCharToString(value, length);
		break;
	case Value::INIT_EPSILON:
		_initialEpsilon = convertCharToString(value, length);
		break;
	default:
		break;
	}
}

void StateMapper::setStep2Value(Value valueIdentifier, unsigned char* value, int length)
{
	switch (valueIdentifier)
	{
	case App2::Value::G_N:
		_2_gN->Append(convertCharToString(value, length));
		break;
	case App2::Value::N :
		_2_N->Append(convertCharToString(value, length));
		break;
	case App2::Value::EPSILON:
		_2_EPSILON->Append(convertCharToString(value, length));
		break;
	case App2::Value::L:
		_2_L->Append(convertCharToString(value, length));
		break;
	case App2::Value::P:
		_2_P->Append(convertCharToString(value, length));
		break;
	case App2::Value::S:
		_2_S->Append(convertCharToString(value, length));
		break;
	case App2::Value::E:
		_2_E->Append(convertCharToString(value, length));
		break;

	default:
		break;
	}
}

void StateMapper::setStep3Value(Value valueIdentifier, unsigned char* value, int length)
{
	switch (valueIdentifier)
	{
	case App2::Value::G_N:
		_3_gN->Append(convertCharToString(value, length));
		break;
	case App2::Value::N:
		_3_N->Append(convertCharToString(value, length));
	case App2::Value::EPSILON:
		_3_EPSILON->Append(convertCharToString(value, length));
		break;
	case App2::Value::L:
		_3_L->Append(convertCharToString(value, length));
		break;
	case App2::Value::P:
		_3_P->Append(convertCharToString(value, length));
		break;
	case App2::Value::S:
		_3_S->Append(convertCharToString(value, length));
		break;
	case App2::Value::E:
		_3_E->Append(convertCharToString(value, length));
		break;
	default:
		break;
	}
}

Platform::String^ StateMapper::getValue(Value value, int iteration)
{
	return getValue(currentStep, value, iteration);
}

Platform::String^ StateMapper::getValue(Step step, Value value, int iteration)
{
	switch (step)
	{
	case App2::Step::STEP_1:
		return getStep1Value(value);

	case App2::Step::STEP_2:
		return getStep2Value(value, iteration);

	case App2::Step::STEP_3:
		return getStep3Value(value, iteration);
	}
}

Platform::String^ StateMapper::getStep1Value(Value valueIdentifier)
{
	switch (valueIdentifier)
	{
	case App2::Value::INIT_H:
		return _initialHash;

	case App2::Value::INIT_N:
		return _initialN;

	case App2::Value::INIT_EPSILON:
		return _initialEpsilon;

	default:
		return L"Invalid Value for Step 1";
	}
}

Platform::String^ StateMapper::getStep2Value(Value valueIdentifier, int iteration)
{
	switch (valueIdentifier)
	{
	case App2::Value::G_N:
		return _2_gN->GetAt(iteration);
	case App2::Value::N:
		return _2_N->GetAt(iteration);
	case App2::Value::EPSILON:
		return _2_EPSILON->GetAt(iteration);
	case App2::Value::L:
		return _2_L->GetAt(iteration);
		break;
	case App2::Value::P:
		return _2_P->GetAt(iteration);
		break;
	case App2::Value::S:
		return _2_S->GetAt(iteration);
		break;
	case App2::Value::E:
		return _2_E->GetAt(iteration);
		break;
	default:
		break;
	}
}

Platform::String^ StateMapper::getStep3Value(Value valueIdentifier, int iteration)
{
	switch (valueIdentifier)
	{
	case App2::Value::G_N:
		return _3_gN->GetAt(iteration);
	case App2::Value::N:
		return _3_N->GetAt(iteration);
	case App2::Value::EPSILON:
		return _3_EPSILON->GetAt(iteration);
	case App2::Value::L:
		return _3_L->GetAt(iteration);
		break;
	case App2::Value::P:
		return _3_P->GetAt(iteration);
		break;
	case App2::Value::S:
		return _3_S->GetAt(iteration);
		break;
	case App2::Value::E:
		return _3_E->GetAt(iteration);
		break;
	default:
		break;
	}
}