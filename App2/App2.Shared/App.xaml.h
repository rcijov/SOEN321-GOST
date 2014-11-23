//
// App.xaml.h
// Declaration of the App class.
//

#pragma once

#include "App.g.h"
#include "StateMapper.h"

namespace App2
{
	public enum class GOSTStep
	{
		InitialH,
		InitialV,
		Initial
	};

	/// <summary>
	/// Provides application-specific behavior to supplement the default Application class.
	/// </summary>
	ref class App sealed
	{
	public:
		App();
		
		virtual void OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs^ e) override;
		
		Platform::String^ GetGOSTStep(Platform::String^ hashStep);
		
		void AddGOSTStep(Platform::String^ hashStep, unsigned char* value, int length);
		
		property StateMapper^ stateMapper
		{
			StateMapper^ get() { return _stateMapper; };

			void set(StateMapper^ value)
			{
				_stateMapper = value;
			};
		};
	private:

#if WINAPI_FAMILY==WINAPI_FAMILY_PHONE_APP
		Windows::UI::Xaml::Media::Animation::TransitionCollection^ _transitions;
		Windows::Foundation::EventRegistrationToken _firstNavigatedToken;

		void RootFrame_FirstNavigated(Platform::Object^ sender, Windows::UI::Xaml::Navigation::NavigationEventArgs^ e);
#endif

		void OnSuspending(Platform::Object^ sender, Windows::ApplicationModel::SuspendingEventArgs^ e);
		
		Platform::Collections::Map<Platform::String^, Platform::String^>^ intermediateLists;
		
		StateMapper^ _stateMapper;
	};
}