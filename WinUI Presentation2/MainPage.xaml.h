#pragma once

#include "MainPage.g.h"

namespace winrt::WinUI_Presentation2::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();

        void Button_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);
    };
}

namespace winrt::WinUI_Presentation2::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
