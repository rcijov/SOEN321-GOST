#include "pch.h"
#include "StateMapper.h"

using namespace App2;

StateMapper::StateMapper(StateMapper^ other)
{
	currentStep = Step::STEP_1;
};

StateMapper::StateMapper()
{
	currentStep = Step::STEP_1;
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

}

void StateMapper::setStep3Value(Value valueIdentifier, unsigned char* value, int length)
{

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

Platform::String^ StateMapper::getStep2Value(Value valueIdentifier, int length)
{
	return L"";
}

Platform::String^ StateMapper::getStep3Value(Value valueIdentifier, int length)
{
	return L"";
}