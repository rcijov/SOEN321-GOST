//
// Stage2.xaml.h
// Declaration of the Stage2 class
//

#pragma once

#include "Stage2.g.h"

namespace App2
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class Stage2 sealed
	{
	public:
		Stage2();
	private:
		void Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
