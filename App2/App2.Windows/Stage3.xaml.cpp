//
// Stage3.xaml.cpp
// Implementation of the Stage3 class
//

#include "pch.h"
#include "Stage2.xaml.h"
#include "Stage3.xaml.h"
#include "Page1.xaml.h"

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

String^ res;

Stage3::Stage3()
{
	InitializeComponent();
	imgBox3->Source = ref new BitmapImage(ref new Uri("ms-appx:///Assets/Stage3/Stage3.jpg"));
	txtCode3->Text = "N : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_3, App2::Value::N, 0) + "\n";
	txtCode3->Text += "Epsilon : " + safe_cast<App2::App^>(App2::App::Current)->stateMapper->getValue(App2::Step::STEP_3, App2::Value::EPSILON, 0) + "\n";
	txtCode3->Text += "Result H : " + res;
	txtExpl3->Text = "In the third stage the final hash is produced. This is done by:" + "\n" +
		"- Turning the remains of M into the sub - message m" + "\n" +
		"- Processing the hash using m" + "\n" +
		"- Updating N and Sigma to take m's length and content into account" + "\n" +
		"- Strengthening the hash by performing a re - hash using N" + "\n" +
		"- Strengthening the hash once more by performing a re - hash with Sigma." + "\n" +
		"Finally, the hash is completed and returned.";
}

Stage3::Stage3(String^ str)
{
	res = str;
}


void App2::Stage3::btnBackP3_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(App2::Stage2::typeid);
}
