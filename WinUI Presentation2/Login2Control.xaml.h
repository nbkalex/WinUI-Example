#pragma once

#include "winrt/Microsoft.UI.Xaml.h"
#include "winrt/Microsoft.UI.Xaml.Markup.h"
#include "winrt/Microsoft.UI.Xaml.Controls.Primitives.h"
#include "Login2Control.g.h"

using namespace winrt::Windows::UI::Core;

namespace winrt::WinUI_Presentation2::implementation
{
    struct Login2Control : Login2ControlT<Login2Control>
    {
      //inline static winrt::Windows::UI::Xaml::DependencyProperty kUsernameProperty =
      //  winrt::Windows::UI::Xaml::DependencyProperty::Register(
      //    L"Username",
      //    winrt::xaml_typename<hstring>(),
      //    winrt::xaml_typename<winrt::WinUI_Presentation2::Login2Control>(),
      //    winrt::Windows::UI::Xaml::PropertyMetadata{ nullptr, nullptr });

      //inline static winrt::Windows::UI::Xaml::DependencyProperty kPasswordProperty =
      //  winrt::Windows::UI::Xaml::DependencyProperty::Register(
      //    L"Password",
      //    winrt::xaml_typename<hstring>(),
      //    winrt::xaml_typename<winrt::WinUI_Presentation2::Login2Control>(),
      //    winrt::Windows::UI::Xaml::PropertyMetadata{ nullptr, nullptr });

        Login2Control();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        hstring Username() { return mUsername; }
        void Username(hstring aValue) 
        {
          mUsername = aValue; 
          mPropertyChanged(*this, Microsoft::UI::Xaml::Data::PropertyChangedEventArgs{ L"Username" });
        }

        hstring Password() { return mPassword; }
        void Password(hstring aValue) 
        {
          mPassword = aValue;
          mPropertyChanged(*this, Microsoft::UI::Xaml::Data::PropertyChangedEventArgs{ L"Password" });
        }

        void Execute();

        winrt::event_token PropertyChanged(
          Microsoft::UI::Xaml::Data::PropertyChangedEventHandler const& aHandler);
        void PropertyChanged(winrt::event_token const& token);

        winrt::event<Microsoft::UI::Xaml::Data::PropertyChangedEventHandler> mPropertyChanged;

    private:
      hstring mUsername;
      hstring mPassword;
    public:
      void Button_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);
    };
}

namespace winrt::WinUI_Presentation2::factory_implementation
{
    struct Login2Control : Login2ControlT<Login2Control, implementation::Login2Control>
    {
    };
}
