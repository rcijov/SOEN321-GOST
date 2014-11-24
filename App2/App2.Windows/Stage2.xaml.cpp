//
// Stage2.xaml.cpp
// Implementation of the Stage2 class
//

#include "pch.h"
#include "Stage1.xaml.h"
#include "Stage2.xaml.h"
#include "Stage3.xaml.h"
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
using namespace Windows::UI::Xaml::Media::Imaging;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

Stage2::Stage2()
{
	InitializeComponent();
	imgBox2->Source = ref new BitmapImage(ref new Uri("ms-appx:///Assets/Stage2/Stage2a.jpg"));
	txtCode2->Text = "H : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_1, App2::Value::INIT_H, 0) + "\n";
}


void App2::Stage2::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(App2::Stage3::typeid);
}


void App2::Stage2::btnBackP2_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(App2::Stage1::typeid);
}


void App2::Stage2::btn1_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	imgBox2->Source = ref new BitmapImage(ref new Uri("ms-appx:///Assets/Stage2/Stage2a.jpg"));
	txtCode2->Text = "H : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_1, App2::Value::INIT_H, 0) + "\n";
}


void App2::Stage2::btn2_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	imgBox2->Source = ref new BitmapImage(ref new Uri("ms-appx:///Assets/Stage2/Stage2b.jpg"));
	txtCode2->Text = "H : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_1, App2::Value::INIT_H, 0) + "\n";
}


void App2::Stage2::btn3_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	imgBox2->Source = ref new BitmapImage(ref new Uri("ms-appx:///Assets/Stage2/Stage2a.jpg"));
	txtCode2->Text = "H : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_1, App2::Value::INIT_H, 0) + "\n";
}
