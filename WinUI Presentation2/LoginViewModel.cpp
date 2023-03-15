#include "pch.h"
#include "LoginViewModel.h"
#if __has_include("LoginViewModel.g.cpp")
#include "LoginViewModel.g.cpp"
#endif

namespace winrt::WinUI_Presentation2::implementation
{
  winrt::event_token LoginViewModel::PropertyChanged(
    Microsoft::UI::Xaml::Data::PropertyChangedEventHandler const& aHandler)
  {
    return mPropertyChanged.add(aHandler);
  }
  void LoginViewModel::PropertyChanged(winrt::event_token const& aToken)
  {
    mPropertyChanged.remove(aToken);
  }
}
