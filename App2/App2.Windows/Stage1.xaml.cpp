//
// Page2.xaml.cpp
// Implementation of the Page2 class
//

#include "pch.h"
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
}

Stage1::Stage1(int c)
{
	ch = c;
}

void App2::Stage1::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(App2::Stage2::typeid);
}
