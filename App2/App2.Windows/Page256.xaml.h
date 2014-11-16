//
// Page256.xaml.h
// Declaration of the Page256 class
//

#pragma once

#include "Page256.g.h"

namespace App2
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class Page256 sealed
	{
	public:
		Page256();
	private:
		void txt256_SelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void btnReturn_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
