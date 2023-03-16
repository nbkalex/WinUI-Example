#include "pch.h"
#include "AnimationControl.xaml.h"
#if __has_include("AnimationControl.g.cpp")
#include "AnimationControl.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::WinUI_Presentation2::implementation
{
    AnimationControl::AnimationControl()
    {
        InitializeComponent();

        /*winrt::AnimatedVisuals::Music_animation animation;
        player().Source(animation);
        player().Pause();
        player().Resume();*/
    }

    int32_t AnimationControl::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void AnimationControl::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void AnimationControl::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        //myButton().Content(box_value(L"Clicked"));
    }
}
