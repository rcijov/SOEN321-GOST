//
// Page256.xaml.cpp
// Implementation of the Page256 class
//

#include "pch.h"
#include "Page256.xaml.h"
#include <sstream>

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
	//const wchar_t* charArray = txtInput->Text->ToString()->Data();

	Stribog stri;

	//const int size = txtInput->Text->ToString()->Length();

	//char fix[6];
	//memcpy(fix, charArray, txtInput->Text->ToString()->Length());

	const wchar_t* orig = txtInput->Text->ToString()->Data();
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

		ss << std::hex << casted[2*i] << casted[2*i + 1];
		ss >> value;

		if (i > lol)
			int a = 0;

		newList[i] = value;
	}

	stri.hash_256(newList, (strlen((char*)casted) / 2) * 8, h256);
	
	int integers[256];

	for (size_t i = 0; i < sizeof(h256); i++)
	{
		integers[i] = static_cast<int>(h256[i]);
	}

	wchar_t wstr[sizeof(integers)];
	std::mbstowcs(wstr, (const char*)integers, 256);
	
	outputLabel->Text = ref new String(wstr);
}