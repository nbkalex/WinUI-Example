#include "pch.h"
#include "MainPage.xaml.h"
#if __has_include("MainPage.g.cpp")
#include "MainPage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::WinUI_Presentation2::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
    }
}


void winrt::WinUI_Presentation2::implementation::MainPage::Button_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
  sender.as<winrt::Microsoft::UI::Xaml::Controls::Button>().Content(winrt::box_value(L"dkjdskj"));
}
