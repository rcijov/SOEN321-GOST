//
// Page2.xaml.cpp
// Implementation of the Page2 class
//

#include "pch.h"
#include "Page1.xaml.h"
#include "Stage1.xaml.h"
#include "Stage2.xaml.h"
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

int ch;

Stage1::Stage1()
{
	InitializeComponent();
	txtTitle->Text = ch.ToString();
	imgBox->Source = ref new BitmapImage(ref new Uri("ms-appx:///Assets/Stage1/Stage1.jpg"));
	//txtCode->Text = "H : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_1, App2::Value::INIT_H, 0) + "\n";
	//txtCode->Text += "Epsilon : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_1, App2::Value::INIT_EPSILON, 0) + "\n";
	//txtCode->Text += "N : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_1, App2::Value::INIT_N, 0) + "\n";
	hValue->Text = safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_1, App2::Value::INIT_H, 0);
	epsilonValue->Text = safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_1, App2::Value::INIT_EPSILON, 0);
	nValue->Text = safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_1, App2::Value::INIT_N, 0);
	txtExpl->Text = "Stage 1 involves the initialization of variables." + "\n" + 
		"The variables of interest include: " + "\n" + "h - The hash of the message. In the case of a 512 bit hash, it is initialized to 0^512." + 
		"\n" + "For 256 bit hashes it is initialized to (00000001)^64 N - The length of the processed message." + 
		"\n" + "A processed message refers to the number of bits out of M which have been hashed so far."
		+ "\n" + "This is important because the GOST algorithm hashes the function in blocks of either 256 or 512. The value is initialized to 0 ^ 512. Sigma - The control sum of the processed message." 
		+ "\n" + "The control sum refers to the running sum of each sub - message processed."
		+ "\n" + "The control sum is initialized to 0 ^ 512 and is equals to Sigma + m_n for each sub - message m.";
}

Stage1::Stage1(int c)
{
	ch = c;
}

void App2::Stage1::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(App2::Stage2::typeid);
}

void App2::Stage1::btnBackP1_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(App2::Page1::typeid);
}