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
	btn1->Visibility = Windows::UI::Xaml::Visibility::Visible;
	btn2->Visibility = Windows::UI::Xaml::Visibility::Visible;
	btn3->Visibility = Windows::UI::Xaml::Visibility::Visible;

	btnE1->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	btnE2->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	btnE3->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	btnE4->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	btnE5->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	btnE6->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	btnE7->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	btnE8->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	btnE9->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	btnE10->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	btnE11->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	btnE12->Visibility = Windows::UI::Xaml::Visibility::Collapsed;

	try{
		txtCode2->Text = "N : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_2, App2::Value::N, 0) + "\n";
		txtCode2->Text += "H : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_2, App2::Value::G_N, 0) + "\n";
		txtCode2->Text += "Epsilon : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_2, App2::Value::EPSILON, 0) + "\n";
		txtExpl2->Text = "Stage 2 involves breaking the overall message down into sub - messages and hashing them. In the event where the original message is less than or equal to 512 bits then stage 2 is skipped."
			+ "\n" + "In this stage each message block is hashed using the function g_N(). After hashing has occurred, the message length N and control sum Sigma are updated.";
	}
	catch (Platform::Exception^)
	{
		txtExpl2->Text = "There is no stage 2 because the length of the message is less than 512 characters.";
		btn1->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		btn2->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		btn3->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	}
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
	try{
		txtCode2->Text = "N : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_2, App2::Value::N, 0) + "\n";
		txtCode2->Text += "H : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_2, App2::Value::G_N, 0) + "\n";
		txtCode2->Text += "Epsilon : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_2, App2::Value::EPSILON, 0) + "\n";
		txtExpl2->Text = "Stage 2 involves breaking the overall message down into sub - messages and hashing them. In the event where the original message is less than or equal to 512 bits then stage 2 is skipped."
			+ "\n" + "In this stage each message block is hashed using the function g_N(). After hashing has occurred, the message length N and control sum Sigma are updated.";
	
		btnE1->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		btnE2->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		btnE3->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		btnE4->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		btnE5->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		btnE6->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		btnE7->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		btnE8->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		btnE9->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		btnE10->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		btnE11->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		btnE12->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	}
	catch (Platform::Exception^)
	{
		txtExpl2->Text = "There is no stage 2 because the length of the message is less than 512 characters.";
		btn1->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		btn2->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		btn3->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	}
}


void App2::Stage2::btn2_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	try{
		imgBox2->Source = ref new BitmapImage(ref new Uri("ms-appx:///Assets/Stage2/Stage2b.jpg"));
		txtCode2->Text = "N : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_2, App2::Value::N, 0) + "\n";
		txtCode2->Text += "H : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_2, App2::Value::G_N, 0) + "\n";
		txtCode2->Text += "Epsilon : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_2, App2::Value::EPSILON, 0) + "\n";
		txtExpl2->Text = "Stage 2 involves breaking the overall message down into sub - messages and hashing them. In the event where the original message is less than or equal to 512 bits then stage 2 is skipped."
			+ "\n" + "In this stage each message block is hashed using the function g_N(). After hashing has occurred, the message length N and control sum Sigma are updated.";

		btnE1->Visibility = Windows::UI::Xaml::Visibility::Visible;
		btnE2->Visibility = Windows::UI::Xaml::Visibility::Visible;
		btnE3->Visibility = Windows::UI::Xaml::Visibility::Visible;
		btnE4->Visibility = Windows::UI::Xaml::Visibility::Visible;
		btnE5->Visibility = Windows::UI::Xaml::Visibility::Visible;
		btnE6->Visibility = Windows::UI::Xaml::Visibility::Visible;
		btnE7->Visibility = Windows::UI::Xaml::Visibility::Visible;
		btnE8->Visibility = Windows::UI::Xaml::Visibility::Visible;
		btnE9->Visibility = Windows::UI::Xaml::Visibility::Visible;
		btnE10->Visibility = Windows::UI::Xaml::Visibility::Visible;
		btnE11->Visibility = Windows::UI::Xaml::Visibility::Visible;
		btnE12->Visibility = Windows::UI::Xaml::Visibility::Visible;

	}
	catch (Platform::Exception^)
	{
		txtExpl2->Text = "There is no stage 2 because the length of the message is less than 512 characters.";
		btn1->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		btn2->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		btn3->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	}
}


void App2::Stage2::btn3_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	try{
		txtCode2->Text = "N : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_2, App2::Value::N, 0) + "\n";
		txtCode2->Text += "H : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_2, App2::Value::G_N, 0) + "\n";
		txtCode2->Text += "Epsilon : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_2, App2::Value::EPSILON, 0) + "\n";
		txtExpl2->Text += "Stage 2 involves breaking the overall message down into sub - messages and hashing them. In the event where the original message is less than or equal to 512 bits then stage 2 is skipped."
			+ "\n" + "In this stage each message block is hashed using the function g_N(). After hashing has occurred, the message length N and control sum Sigma are updated.";
	
		btnE1->Visibility  = Windows::UI::Xaml::Visibility::Collapsed;
		btnE2->Visibility  = Windows::UI::Xaml::Visibility::Collapsed;
		btnE3->Visibility  = Windows::UI::Xaml::Visibility::Collapsed;
		btnE4->Visibility  = Windows::UI::Xaml::Visibility::Collapsed;
		btnE5->Visibility  = Windows::UI::Xaml::Visibility::Collapsed;
		btnE6->Visibility  = Windows::UI::Xaml::Visibility::Collapsed;
		btnE7->Visibility  = Windows::UI::Xaml::Visibility::Collapsed;
		btnE8->Visibility  = Windows::UI::Xaml::Visibility::Collapsed;
		btnE9->Visibility  = Windows::UI::Xaml::Visibility::Collapsed;
		btnE10->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		btnE11->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		btnE12->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	}
	catch (Platform::Exception^)
	{
		txtExpl2->Text = "There is no stage 2 because the length of the message is less than 512 characters.";
		btn1->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		btn2->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		btn3->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	}
}

void App2::Stage2::changeIteration(int ch)
{
	App^ app = safe_cast<App2::App^>(App2::App::Current);

	Platform::String^ valueL = app->stateMapper->getValue(App2::Step::STEP_2, App2::Value::L, (ch - 1));
	Platform::String^ valueP = app->stateMapper->getValue(App2::Step::STEP_2, App2::Value::P, (ch - 1));
	Platform::String^ valueS = app->stateMapper->getValue(App2::Step::STEP_2, App2::Value::S, (ch - 1));

	txtCode2->Text =  "Iteration "   + ch + "\n";
	txtCode2->Text += "L : " + valueL + "\n";
	txtCode2->Text += "P : " + valueP + "\n";
	txtCode2->Text += "S : " + valueS + "\n";
}


void App2::Stage2::btnE1_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	changeIteration(1);
}


void App2::Stage2::btnE2_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	changeIteration(2);
}


void App2::Stage2::btnE3_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	changeIteration(3);
}


void App2::Stage2::btnE4_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	changeIteration(4);
}


void App2::Stage2::btnE5_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	changeIteration(5);
}


void App2::Stage2::btnE6_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	changeIteration(6);
}


void App2::Stage2::btnE7_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	changeIteration(7);
}


void App2::Stage2::btnE8_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	changeIteration(8);
}


void App2::Stage2::btnE9_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	changeIteration(9);
}


void App2::Stage2::btnE10_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	changeIteration(10);
}


void App2::Stage2::btnE11_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	changeIteration(11);
}


void App2::Stage2::btnE12_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	changeIteration(12);
}
