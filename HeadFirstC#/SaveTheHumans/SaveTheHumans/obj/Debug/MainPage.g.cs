﻿

#pragma checksum "C:\Users\v-ctran\Documents\Visual Studio 2013\Projects\SaveTheHumans\SaveTheHumans\MainPage.xaml" "{406ea660-64cf-4c82-b6f0-42d48172a799}" "643330BFA0E77BCEFB99CFEEAB856A8E"
//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace SaveTheHumans
{
    partial class MainPage : global::Windows.UI.Xaml.Controls.Page, global::Windows.UI.Xaml.Markup.IComponentConnector
    {
        [global::System.CodeDom.Compiler.GeneratedCodeAttribute("Microsoft.Windows.UI.Xaml.Build.Tasks"," 4.0.0.0")]
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
 
        public void Connect(int connectionId, object target)
        {
            switch(connectionId)
            {
            case 1:
                #line 70 "..\..\MainPage.xaml"
                ((global::Windows.UI.Xaml.Controls.Primitives.ButtonBase)(target)).Click += this.startButton_Click;
                 #line default
                 #line hidden
                break;
            case 2:
                #line 76 "..\..\MainPage.xaml"
                ((global::Windows.UI.Xaml.UIElement)(target)).PointerExited += this.playArea_PointerExited;
                 #line default
                 #line hidden
                #line 76 "..\..\MainPage.xaml"
                ((global::Windows.UI.Xaml.UIElement)(target)).PointerMoved += this.playArea_PointerMoved;
                 #line default
                 #line hidden
                break;
            case 3:
                #line 83 "..\..\MainPage.xaml"
                ((global::Windows.UI.Xaml.UIElement)(target)).PointerEntered += this.target_PointerEntered;
                 #line default
                 #line hidden
                break;
            case 4:
                #line 94 "..\..\MainPage.xaml"
                ((global::Windows.UI.Xaml.UIElement)(target)).PointerPressed += this.human_PointerPressed;
                 #line default
                 #line hidden
                #line 94 "..\..\MainPage.xaml"
                ((global::Windows.UI.Xaml.UIElement)(target)).PointerReleased += this.human_PointerReleased;
                 #line default
                 #line hidden
                break;
            }
            this._contentLoaded = true;
        }
    }
}

