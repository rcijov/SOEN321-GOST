//
// Page256.xaml.cpp
// Implementation of the Page256 class
//

#include "pch.h"
#include "Page256.xaml.h"

using namespace App2;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

#include "MainPage.xaml.h"
#include "stribog_test_data.h"

unsigned char h256[32] = {};

void test_256()
{
	Stribog stri;
	int i = 0;
	unsigned char h256[32] = {};

	for (i = 0; i<TEST_VECTORS; i++)
	{
		stri.hash_256(Message[i], MessageLength[i], h256);
		if (memcmp(h256, Hash_256[i], sizeof(unsigned char) * 32))
		{
			printf("  SelfTesting: Fail\n");
			return;
		}
	}
	printf("  SelfTesting: Pass\n");
}

Page256::Page256()
{
	InitializeComponent();
	test_256();
}


void App2::Page256::txt256_SelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{

}


void App2::Page256::btnReturn_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(App2::MainPage::typeid);
}


void App2::Page256::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	/*String^ input = txtInput->Text->ToString();
	int length = input->Length();

	Platform::String^ fooRT = "aoeu";
	std::wstring fooW(fooRT->Begin());
	std::string fooA(f
		ooW.begin(), fooW.end());
	const char* charStr = fooA.c_str();
	const int len = (const int)length;
	char fix[len];
	memcpy(fix, charStr, sizeof(charStr));

	Stribog stri;
	stri.hash_256(fix, length, h256);*/
}
