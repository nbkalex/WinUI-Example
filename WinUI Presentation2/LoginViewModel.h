#pragma once

#include "LoginViewModel.g.h"

namespace winrt::WinUI_Presentation2::implementation
{
    struct LoginViewModel : LoginViewModelT<LoginViewModel>
    {
        LoginViewModel() = default;

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


        winrt::event_token PropertyChanged(
          Microsoft::UI::Xaml::Data::PropertyChangedEventHandler const& aHandler);
        void PropertyChanged(winrt::event_token const& token);

        winrt::event<Microsoft::UI::Xaml::Data::PropertyChangedEventHandler> mPropertyChanged;

    private:
      hstring mUsername;
      hstring mPassword;
    };
}

namespace winrt::WinUI_Presentation2::factory_implementation
{
    struct LoginViewModel : LoginViewModelT<LoginViewModel, implementation::LoginViewModel>
    {
    };
}
