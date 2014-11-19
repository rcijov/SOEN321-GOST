﻿//
// Page256.xaml.cpp
// Implementation of the Page256 class
//

#include "pch.h"
#include "Page1.xaml.h"
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
#include "Stage1.xaml.h"

unsigned char h256[32] = {};
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

String^ convertFromUnsignedCharArrayToStringStream(unsigned char* input,int size){

	String^ stringValue;
	for (size_t i = 0; i < size; i++)
	{
		stringValue += input[i].ToString();
	}

	return stringValue;
}
unsigned char*  convertFromHexToString(unsigned char * input, int size){

	unsigned char *newList = new unsigned char[size];
	for (size_t i = 0; i < size; i++)
	{
		unsigned int value = 0;

		std::stringstream ss;

		ss << std::hex << input[i];
		ss >> value;

	

		newList[i] = value;
	}
	return newList;
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


void App2::Page1::btnReturn_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(App2::MainPage::typeid);
}


void App2::Page1::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
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

	Stribog stri;

	stri.hash_256(newList, (strlen((char*)casted) / 2) * 8, h256);
	
	String^ stringValue;
	//std::stringstream ss;
	//unsigned char a = stri.infoSave->iv.front();
	stringValue = convertFromUnsignedCharArrayToStringStream(stri.infoSave->iv.front(), strlen((char*)stri.infoSave->iv.front()));
	// popped out the the
	stri.infoSave->iv.pop();
	//for (size_t i = 0; i < sizeof(h256); i++)
	//{		
	//	stringValue += h256[i].ToString();
	//}
	
	outputLabel->Text = stringValue;
	App2::Stage1::Stage1(choice);
//	this->Frame->Navigate(App2::Stage1::typeid);
}
