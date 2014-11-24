//
// Stage3.xaml.h
// Declaration of the Stage3 class
//

#pragma once

#include "Stage3.g.h"

namespace App2
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class Stage3 sealed
	{
	public:
		Stage3();
		Stage3(Platform::String^ str);

	private:
		void btnBackP3_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
