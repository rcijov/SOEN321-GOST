﻿

//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"
#include "Page2.xaml.h"




void ::App2::Page2::InitializeComponent()
{
    if (_contentLoaded)
        return;

    _contentLoaded = true;

    // Call LoadComponent on ms-appx:///Page2.xaml
    ::Windows::UI::Xaml::Application::LoadComponent(this, ref new ::Windows::Foundation::Uri(L"ms-appx:///Page2.xaml"), ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);

    // Get the TextBlock named 'txtTitle'
    txtTitle = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"txtTitle"));
}

void ::App2::Page2::Connect(int connectionId, Platform::Object^ target)
{
    (void)connectionId; // Unused parameter
    (void)target; // Unused parameter
    _contentLoaded = true;
}

