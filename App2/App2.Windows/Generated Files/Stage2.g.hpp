﻿

//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"
#include "Stage2.xaml.h"




void ::App2::Stage2::InitializeComponent()
{
    if (_contentLoaded)
        return;

    _contentLoaded = true;

    // Call LoadComponent on ms-appx:///Stage2.xaml
    ::Windows::UI::Xaml::Application::LoadComponent(this, ref new ::Windows::Foundation::Uri(L"ms-appx:///Stage2.xaml"), ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);

    // Get the Image named 'imgBox2'
    imgBox2 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"imgBox2"));
    // Get the TextBlock named 'Iteration'
    Iteration = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"Iteration"));
    // Get the StackPanel named 'lpsSteps'
    lpsSteps = safe_cast<::Windows::UI::Xaml::Controls::StackPanel^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"lpsSteps"));
    // Get the TextBlock named 'txtCode2'
    txtCode2 = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"txtCode2"));
    // Get the TextBlock named 'txtExpl2'
    txtExpl2 = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"txtExpl2"));
    // Get the StackPanel named 'finalGroup'
    finalGroup = safe_cast<::Windows::UI::Xaml::Controls::StackPanel^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"finalGroup"));
    // Get the Button named 'btnE1'
    btnE1 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"btnE1"));
    // Get the Button named 'btnE2'
    btnE2 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"btnE2"));
    // Get the Button named 'btnE3'
    btnE3 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"btnE3"));
    // Get the Button named 'btnE4'
    btnE4 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"btnE4"));
    // Get the Button named 'btnE5'
    btnE5 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"btnE5"));
    // Get the Button named 'btnE6'
    btnE6 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"btnE6"));
    // Get the Button named 'btnE7'
    btnE7 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"btnE7"));
    // Get the Button named 'btnE8'
    btnE8 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"btnE8"));
    // Get the Button named 'btnE9'
    btnE9 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"btnE9"));
    // Get the Button named 'btnE10'
    btnE10 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"btnE10"));
    // Get the Button named 'btnE11'
    btnE11 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"btnE11"));
    // Get the Button named 'btnE12'
    btnE12 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"btnE12"));
    // Get the Button named 'btn1'
    btn1 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"btn1"));
    // Get the Button named 'btn2'
    btn2 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"btn2"));
    // Get the Button named 'btn3'
    btn3 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"btn3"));
    // Get the Button named 'btnStage3'
    btnStage3 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"btnStage3"));
    // Get the TextBlock named 'finalValueTitle'
    finalValueTitle = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"finalValueTitle"));
    // Get the StackPanel named 'finalValues'
    finalValues = safe_cast<::Windows::UI::Xaml::Controls::StackPanel^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"finalValues"));
    // Get the TextBlock named 'sigmaValue'
    sigmaValue = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"sigmaValue"));
    // Get the TextBlock named 'hValue'
    hValue = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"hValue"));
    // Get the TextBlock named 'nValue'
    nValue = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"nValue"));
    // Get the TextBlock named 'lValue'
    lValue = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"lValue"));
    // Get the TextBlock named 'pValue'
    pValue = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"pValue"));
    // Get the TextBlock named 'sValue'
    sValue = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"sValue"));
    // Get the TextBlock named 'klpsValue'
    klpsValue = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"klpsValue"));
    // Get the TextBlock named 'kValue'
    kValue = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"kValue"));
    // Get the Button named 'backButton'
    backButton = safe_cast<::Windows::UI::Xaml::Controls::Button^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"backButton"));
    // Get the TextBlock named 'appTitle'
    appTitle = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"appTitle"));
}

void ::App2::Stage2::Connect(int connectionId, Platform::Object^ target)
{
    switch (connectionId)
    {
    case 1:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::Stage2::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&Stage2::btnE1_Click);
        break;
    case 2:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::Stage2::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&Stage2::btnE2_Click);
        break;
    case 3:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::Stage2::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&Stage2::btnE3_Click);
        break;
    case 4:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::Stage2::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&Stage2::btnE4_Click);
        break;
    case 5:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::Stage2::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&Stage2::btnE5_Click);
        break;
    case 6:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::Stage2::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&Stage2::btnE6_Click);
        break;
    case 7:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::Stage2::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&Stage2::btnE7_Click);
        break;
    case 8:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::Stage2::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&Stage2::btnE8_Click);
        break;
    case 9:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::Stage2::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&Stage2::btnE9_Click);
        break;
    case 10:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::Stage2::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&Stage2::btnE10_Click);
        break;
    case 11:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::Stage2::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&Stage2::btnE11_Click);
        break;
    case 12:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::Stage2::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&Stage2::btnE12_Click);
        break;
    case 13:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::Stage2::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&Stage2::btn1_Click);
        break;
    case 14:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::Stage2::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&Stage2::btn2_Click);
        break;
    case 15:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::Stage2::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&Stage2::btn3_Click);
        break;
    case 16:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::Stage2::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&Stage2::Button_Click);
        break;
    case 17:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::App2::Stage2::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&Stage2::btnBackP2_Click);
        break;
    }
    (void)connectionId; // Unused parameter
    (void)target; // Unused parameter
    _contentLoaded = true;
}

