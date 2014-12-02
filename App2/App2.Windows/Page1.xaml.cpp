//
// Page256.xaml.cpp
// Implementation of the Page256 class
//

#include "pch.h"
#include "Page1.xaml.h"
#include <sstream>
#include <string>
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
#include "Stage1.xaml.h"
#include "Stage3.xaml.h"

unsigned char h256[32] = {};
unsigned char h512[64] = {};
unsigned char* charHexOutput;
int choice;

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

Page1::Page1()
{
	InitializeComponent();
	txtTitle->Text = choice.ToString();
}

Page1::Page1(int ch)
{
	choice = ch;
}

void App2::Page1::txt256_SelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{

}


void App2::Page1::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	const wchar_t* orig = txtInput->Text->ToString()->Data();
	size_t origsize = wcslen(orig) + 1;
	size_t convertedChars = 0;
	char dst[1024];
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

		newList[i] = value;
	}

	Stribog stri;
	String^ stringValue;

	switch (choice)
	{
	case 256:
		stri.hash_256(newList, (strlen((char*)casted) / 2) * 8, h256);

		for (size_t i = 0; i < sizeof(h256); i++)
		{
			wchar_t* value = new wchar_t[4];
			swprintf_s(value, 4, L"%02X", (int)h256[i]);
			stringValue += ref new Platform::String(value);
		}

		break;

	case 512:
		stri.hash_512(newList, (strlen((char*)casted) / 2) * 8, h512);

		for (size_t i = 0; i < sizeof(h512); i++)
		{
			wchar_t* value = new wchar_t[4];
			swprintf_s(value, 4, L"%02X", (int)h256[i]);
			stringValue += ref new Platform::String(value);
			//stringValue += h512[i].ToString();
		}
		break;
	}

	App2::Stage3::Stage3(stringValue,choice);
	App2::Stage1::Stage1(choice);
	this->Frame->Navigate(App2::Stage1::typeid);
}

void App2::Page1::Button_Click_1(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(App2::MainPage::typeid);
}

void App2::Page1::txtInput_TextChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::TextChangedEventArgs^ e)
{
	//Determine if the given string is in hexadecimal
	size_t inputStringLength = wcslen(txtInput->Text->ToString()->Data());
	charHexOutput = new unsigned char[inputStringLength];
	Platform::String^ hexOutput;

	HexInput->Text = "";

	for (size_t i = 0; i < inputStringLength; i++)
	{
		switch (txtInput->Text->ToString()->Data()[i])
		{
			case '0':
				charHexOutput[i] = 0x00;
				HexInput->Text += 0x00 + " ";
				continue;	  
			case '1':	  
				charHexOutput[i] = 0x01;
				HexInput->Text += 0x01 + " ";
				continue;
			case '2':	  
				charHexOutput[i] = 0x02;
				HexInput->Text += 0x02 + " ";
				continue;
			case '3':	  
				charHexOutput[i] = 0x03;
				HexInput->Text += 0x03 + " ";
				continue;
			case '4':	  
				charHexOutput[i] = 0x04;
				HexInput->Text += 0x04 + " ";
				continue;
			case '5':	  
				charHexOutput[i] = 0x05;
				HexInput->Text += 0x05 + " ";
				continue;
			case '6':	  
				charHexOutput[i] = 0x06;
				HexInput->Text += 0x06 + " ";
				continue;
			case '7':	  
				charHexOutput[i] = 0x07;
				HexInput->Text += 0x07 + " ";
				continue;
			case '8':	  
				charHexOutput[i] = 0x08;
				HexInput->Text += 0x08 + " ";
				continue;
			case '9':	 
				charHexOutput[i] = 0x09;
				HexInput->Text += 0x09 + " ";
				continue;
			case 'A':	  
			case 'a':	  
				charHexOutput[i] = 0x0A;
				HexInput->Text += 0x0A + " ";
				continue;
			case 'B':	 
			case 'b':	 
				charHexOutput[i] = 0x0B;
				HexInput->Text += 0x0B + " ";
				continue;
			case 'C':	
			case 'c':	
				charHexOutput[i] = 0x0C;
				HexInput->Text += 0x0C + " ";
				continue;
			case 'D':
			case 'd':
				charHexOutput[i] = 0x0D;
				HexInput->Text += 0x0D + " ";
				continue;
			case 'E':
			case 'e':
				charHexOutput[i] = 0x0E;
				HexInput->Text += 0x0E + " ";
				continue;
			case 'F':
			case 'f':
				charHexOutput[i] = 0x0F;
				HexInput->Text += 0x0F + " ";
				continue;
		}
	}
}