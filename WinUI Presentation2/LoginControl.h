#pragma once

#include "winrt/Windows.UI.Xaml.h"
#include "winrt/Windows.UI.Xaml.Markup.h"
#include "winrt/Windows.UI.Xaml.Interop.h"
#include "winrt/Windows.UI.Xaml.Controls.Primitives.h"
#include "LoginControl.g.h"

namespace winrt::WinUI_Presentation2::implementation
{
    struct LoginControl : LoginControlT<LoginControl>
    {
        LoginControl() 
        {
          InitializeComponent();
        }

    };
}

namespace winrt::WinUI_Presentation2::factory_implementation
{
    struct LoginControl : LoginControlT<LoginControl, implementation::LoginControl>
    {
    };
}
