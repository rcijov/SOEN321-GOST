#pragma once

#include <collection.h>
#include <sstream>

namespace App2
{
	public enum class Step
	{
		STEP_1,
		STEP_2,
		STEP_3
	};

	public enum class Value
	{
		INIT_H,
		INIT_N,
		INIT_EPSILON,
		G_N,
		N,
		EPSILON
	};

	public ref class StateMapper sealed
	{
	public:
		StateMapper(StateMapper^ other);
		StateMapper();

		void setStep(Step step);
		void setValue(Value valueIdentifier, unsigned char* value, int length);

		Step getStep();
		Platform::String^ getValue(Value value, int iteration);
		Platform::String^ getValue(Step step, Value value, int iteration);

	private:
		Step currentStep;

		Platform::String^ convertCharToString(unsigned char* charArray, int length);

		//Step 1
		void setStep1Value(Value valueIdentifier, unsigned char* value, int length);
		Platform::String^ getStep1Value(Value valueIdentifier);

		Platform::String^ _initialHash;
		Platform::String^ _initialN;
		Platform::String^ _initialEpsilon;

		//Step 2
		void setStep2Value(Value valueIdentifier, unsigned char* value, int length);
		Platform::String^ getStep2Value(Value valueIdentifier, int length);

		Platform::Collections::Vector<Platform::String^>^ _2_gN;
		Platform::Collections::Vector<Platform::String^>^ _2_N;
		Platform::Collections::Vector<Platform::String^>^ _2_EPSILON;

		Platform::Collections::Vector<Platform::String^>^ _subM;
		Platform::Collections::Vector<Platform::String^>^ _mPrime;

		Platform::Collections::Vector<Platform::String^>^ _S;
		Platform::Collections::Vector<Platform::String^>^ _P;
		Platform::Collections::Vector<Platform::String^>^ _L;

		//Step 3
		void setStep3Value(Value valueIdentifier, unsigned char* value, int length);
		Platform::String^ getStep3Value(Value valueIdentifier, int length);

		Platform::Collections::Vector<Platform::String^>^ _3_gN;
		Platform::Collections::Vector<Platform::String^>^ _3_N;
		Platform::Collections::Vector<Platform::String^>^ _3_EPSILON;
	};
}