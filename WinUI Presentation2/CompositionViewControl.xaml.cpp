#include "pch.h"
#include "CompositionViewControl.xaml.h"
#if __has_include("CompositionViewControl.g.cpp")
#include "CompositionViewControl.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::WinUI_Presentation2::implementation
{
    CompositionViewControl::CompositionViewControl()
    {
        InitializeComponent();
    }

    int32_t CompositionViewControl::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void CompositionViewControl::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    //void CompositionViewControl::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    //{
    //    myButton().Content(box_value(L"Clicked"));
    //}
}
