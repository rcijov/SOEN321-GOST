//
// Page2.xaml.cpp
// Implementation of the Page2 class
//

#include "pch.h"
#include "Page1.xaml.h"
#include "Stage1.xaml.h"
#include "Stage2.xaml.h"

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
using namespace Windows::UI::Xaml::Media::Imaging;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

int ch;

Stage1::Stage1()
{
	InitializeComponent();
	txtTitle->Text = ch.ToString();
	imgBox->Source = ref new BitmapImage(ref new Uri("ms-appx:///Assets/Stage1/1.png"));
	txtCode->Text = "Code 1";
	txtExpl->Text = "Explenation 1";
}

Stage1::Stage1(int c)
{
	ch = c;
}

void App2::Stage1::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(App2::Stage2::typeid);
}


void App2::Stage1::btn1_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	imgBox->Source = ref new BitmapImage(ref new Uri("ms-appx:///Assets/Stage1/1.png"));
	txtCode->Text = "Code 1";
	txtExpl->Text = "Explenation 1";
}


void App2::Stage1::btn2_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	imgBox->Source = ref new BitmapImage(ref new Uri("ms-appx:///Assets/Stage1/2.png"));
	txtCode->Text = "Code 2";
	txtExpl->Text = "Explenation 2";
}

void App2::Stage1::btn4_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	imgBox->Source = ref new BitmapImage(ref new Uri("ms-appx:///Assets/Stage1/4.png"));
	txtCode->Text = "Code 4";
	txtExpl->Text = "Explenation 4";
}


void App2::Stage1::btn5_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	imgBox->Source = ref new BitmapImage(ref new Uri("ms-appx:///Assets/Stage1/5.png"));
	txtCode->Text = "Code 5";
	txtExpl->Text = "Explenation 5";
}


void App2::Stage1::btn3_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	imgBox->Source = ref new BitmapImage(ref new Uri("ms-appx:///Assets/Stage1/3.png"));
	txtCode->Text = "Code 3";
	txtExpl->Text = "Explenation 3";
}



void App2::Stage1::btnBackP1_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(App2::Page1::typeid);
}
