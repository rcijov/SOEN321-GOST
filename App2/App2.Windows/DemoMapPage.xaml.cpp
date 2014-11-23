//
// DemoMapPage.xaml.cpp
// Implementation of the DemoMapPage class
//

#include "pch.h"
#include "DemoMapPage.xaml.h"
#include <sstream>

using namespace App2;

using namespace Platform;
using namespace Platform::Collections;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Interop;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Basic Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234237

DemoMapPage::DemoMapPage()
{
	InitializeComponent();
	SetValue(_defaultViewModelProperty, ref new Map<String^,Object^>(std::less<String^>()));
	auto navigationHelper = ref new Common::NavigationHelper(this);
	SetValue(_navigationHelperProperty, navigationHelper);
	navigationHelper->LoadState += ref new Common::LoadStateEventHandler(this, &DemoMapPage::LoadState);
	navigationHelper->SaveState += ref new Common::SaveStateEventHandler(this, &DemoMapPage::SaveState);	
}

DependencyProperty^ DemoMapPage::_defaultViewModelProperty =
	DependencyProperty::Register("DefaultViewModel",
		TypeName(IObservableMap<String^,Object^>::typeid), TypeName(DemoMapPage::typeid), nullptr);

/// <summary>
/// used as a trivial view model.
/// </summary>
IObservableMap<String^, Object^>^ DemoMapPage::DefaultViewModel::get()
{
	return safe_cast<IObservableMap<String^, Object^>^>(GetValue(_defaultViewModelProperty));
}

DependencyProperty^ DemoMapPage::_navigationHelperProperty =
	DependencyProperty::Register("NavigationHelper",
		TypeName(Common::NavigationHelper::typeid), TypeName(DemoMapPage::typeid), nullptr);

/// <summary>
/// Gets an implementation of <see cref="NavigationHelper"/> designed to be
/// used as a trivial view model.
/// </summary>
Common::NavigationHelper^ DemoMapPage::NavigationHelper::get()
{
	return safe_cast<Common::NavigationHelper^>(GetValue(_navigationHelperProperty));
}

#pragma region Navigation support

/// The methods provided in this section are simply used to allow
/// NavigationHelper to respond to the page's navigation methods.
/// 
/// Page specific logic should be placed in event handlers for the  
/// <see cref="NavigationHelper::LoadState"/>
/// and <see cref="NavigationHelper::SaveState"/>.
/// The navigation parameter is available in the LoadState method 
/// in addition to page state preserved during an earlier session.

void DemoMapPage::OnNavigatedTo(NavigationEventArgs^ e)
{
	NavigationHelper->OnNavigatedTo(e);

	Platform::String^ sampleM1 = "3231303938373635343332313039383736353433323" +
		                         "1303938373635343332313039383736353433323130" +
								 "3938373635343332313039383736353433323130";

	const wchar_t* orig = sampleM1->ToString()->Data();
	size_t origsize = wcslen(orig) + 1;
	size_t convertedChars = 0;
	char dst[256];
	wcstombs_s(&convertedChars, dst, origsize, orig, _TRUNCATE);


	unsigned char* casted = reinterpret_cast<unsigned char*>(dst);

	const int lol = strlen((char*)casted) / 2;

	unsigned char *newList = new unsigned char[lol];

	for (size_t i = 0; i < strlen((char*)casted) / 2; i++)
	{
		unsigned int value = 0;

		std::stringstream ss;

		ss << std::hex << casted[2 * i] << casted[2 * i + 1];
		ss >> value;

		if (i > lol)
			int a = 0;

		newList[i] = value;
	}

	Stribog stri;
	unsigned char h256[32] = {};
	stri.hash_256(newList, (strlen((char*)casted) / 2) * 8, h256);

	initialH_TB->Text = safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_1, App2::Value::INIT_H, 0);
}

void DemoMapPage::OnNavigatedFrom(NavigationEventArgs^ e)
{
	NavigationHelper->OnNavigatedFrom(e);
}

#pragma endregion

/// <summary>
/// Populates the page with content passed during navigation. Any saved state is also
/// provided when recreating a page from a prior session.
/// </summary>
/// <param name="sender">
/// The source of the event; typically <see cref="NavigationHelper"/>
/// </param>
/// <param name="e">Event data that provides both the navigation parameter passed to
/// <see cref="Frame.Navigate(Type, Object)"/> when this page was initially requested and
/// a dictionary of state preserved by this page during an earlier
/// session. The state will be null the first time a page is visited.</param>
void DemoMapPage::LoadState(Object^ sender, Common::LoadStateEventArgs^ e)
{
	(void) sender;	// Unused parameter
	(void) e;	// Unused parameter


}

/// <summary>
/// Preserves state associated with this page in case the application is suspended or the
/// page is discarded from the navigation cache.  Values must conform to the serialization
/// requirements of <see cref="SuspensionManager::SessionState"/>.
/// </summary>
/// <param name="sender">The source of the event; typically <see cref="NavigationHelper"/></param>
/// <param name="e">Event data that provides an empty dictionary to be populated with
/// serializable state.</param>
void DemoMapPage::SaveState(Object^ sender, Common::SaveStateEventArgs^ e){
	(void) sender;	// Unused parameter
	(void) e; // Unused parameter
}