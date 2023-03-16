#pragma once

#include "winrt/Microsoft.UI.Xaml.h"
#include "winrt/Microsoft.UI.Xaml.Markup.h"
#include "winrt/Microsoft.UI.Xaml.Controls.Primitives.h"
#include "AnimationControl.g.h"

namespace winrt::WinUI_Presentation2::implementation
{
    struct AnimationControl : AnimationControlT<AnimationControl>
    {
        AnimationControl();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::WinUI_Presentation2::factory_implementation
{
    struct AnimationControl : AnimationControlT<AnimationControl, implementation::AnimationControl>
    {
    };
}
