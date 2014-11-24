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
	txtCode2->Text = "N : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_2, App2::Value::N, 0) + "\n";
	txtCode2->Text = "Epsilon : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_2, App2::Value::EPSILON, 0) + "\n";
	txtExpl2->Text = "Stage 2 involves breaking the overall message down into sub - messages and hashing them. In the event where the original message is less than or equal to 512 bits then stage 2 is skipped."
		+ "\n" + "In this stage each message block is hashed using the function g_N(). After hashing has occurred, the message length N and control sum Sigma are updated.";
}


void App2::Stage2::btn2_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	imgBox2->Source = ref new BitmapImage(ref new Uri("ms-appx:///Assets/Stage2/Stage2b.jpg"));
	txtCode2->Text = "H : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_1, App2::Value::INIT_H, 0) + "\n";
}


void App2::Stage2::btn3_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	imgBox2->Source = ref new BitmapImage(ref new Uri("ms-appx:///Assets/Stage2/Stage2a.jpg"));
	txtCode2->Text = "N : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_2, App2::Value::N, 0) + "\n";
	txtCode2->Text = "Epsilon : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_2, App2::Value::EPSILON, 0) + "\n";
	txtExpl2->Text = "Stage 2 involves breaking the overall message down into sub - messages and hashing them. In the event where the original message is less than or equal to 512 bits then stage 2 is skipped."
		+ "\n" + "In this stage each message block is hashed using the function g_N(). After hashing has occurred, the message length N and control sum Sigma are updated.";
}
