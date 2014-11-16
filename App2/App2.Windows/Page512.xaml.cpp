//
// Page512.xaml.cpp
// Implementation of the Page512 class
//

#include "pch.h"
#include "Page512.xaml.h"

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

#include "MainPage.xaml.h"

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

//#include "stribog_test_data.h"

//void test_512()
//{
//	Stribog st;
//	int i = 0;
//	unsigned char h512[64] = {};
//
//	for (i = 0; i<TEST_VECTORS; i++)
//	{
//		st.hash_512(Message[i], MessageLength[i], h512);
//
//		if (memcmp(h512, Hash_512[i], sizeof(unsigned char) * 64))
//		{
//			printf("  SelfTesting: Fail\n");
//			return;
//		}
//	}
//	printf("  SelfTesting: Pass\n");
//}

Page512::Page512()
{
	InitializeComponent();
	//test_512();
}


void App2::Page512::btnReturn_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(App2::MainPage::typeid);
}
