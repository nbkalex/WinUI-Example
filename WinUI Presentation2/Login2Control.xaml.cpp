#include "pch.h"
#include "Login2Control.xaml.h"
#if __has_include("Login2Control.g.cpp")
#include "Login2Control.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::WinUI_Presentation2::implementation
{
    Login2Control::Login2Control()
    {
        InitializeComponent();
        DataContext(*this);
    }

    int32_t Login2Control::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void Login2Control::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void Login2Control::Execute()
    {
      Username(L"Username has been changed");
      Password(L"Password has been changed");      
    }

    winrt::event_token Login2Control::PropertyChanged(
      Microsoft::UI::Xaml::Data::PropertyChangedEventHandler const& aHandler)
    {
      return mPropertyChanged.add(aHandler);
    }
    void Login2Control::PropertyChanged(winrt::event_token const& aToken)
    {
      mPropertyChanged.remove(aToken);
    }

    //void Login2Control::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    //{
    //    myButton().Content(box_value(L"Clicked"));
    //}
}


void winrt::WinUI_Presentation2::implementation::Login2Control::Button_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
  Execute();
}
