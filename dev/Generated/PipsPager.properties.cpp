// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "PipsPager.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(PipsPager)
}

#include "PipsPager.g.cpp"

GlobalDependencyProperty PipsPagerProperties::s_DefaultIndicatorButtonStyleProperty{ nullptr };
GlobalDependencyProperty PipsPagerProperties::s_MaxVisualIndicatorsProperty{ nullptr };
GlobalDependencyProperty PipsPagerProperties::s_NextButtonStyleProperty{ nullptr };
GlobalDependencyProperty PipsPagerProperties::s_NextButtonVisibilityProperty{ nullptr };
GlobalDependencyProperty PipsPagerProperties::s_NumberOfPagesProperty{ nullptr };
GlobalDependencyProperty PipsPagerProperties::s_OrientationProperty{ nullptr };
GlobalDependencyProperty PipsPagerProperties::s_PreviousButtonStyleProperty{ nullptr };
GlobalDependencyProperty PipsPagerProperties::s_PreviousButtonVisibilityProperty{ nullptr };
GlobalDependencyProperty PipsPagerProperties::s_SelectedIndicatorButtonStyleProperty{ nullptr };
GlobalDependencyProperty PipsPagerProperties::s_SelectedPageIndexProperty{ nullptr };
GlobalDependencyProperty PipsPagerProperties::s_TemplateSettingsProperty{ nullptr };

PipsPagerProperties::PipsPagerProperties()
    : m_selectedIndexChangedEventSource{static_cast<PipsPager*>(this)}
{
    EnsureProperties();
}

void PipsPagerProperties::EnsureProperties()
{
    if (!s_DefaultIndicatorButtonStyleProperty)
    {
        s_DefaultIndicatorButtonStyleProperty =
            InitializeDependencyProperty(
                L"DefaultIndicatorButtonStyle",
                winrt::name_of<winrt::Style>(),
                winrt::name_of<winrt::PipsPager>(),
                false /* isAttached */,
                ValueHelper<winrt::Style>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnDefaultIndicatorButtonStylePropertyChanged));
    }
    if (!s_MaxVisualIndicatorsProperty)
    {
        s_MaxVisualIndicatorsProperty =
            InitializeDependencyProperty(
                L"MaxVisualIndicators",
                winrt::name_of<int>(),
                winrt::name_of<winrt::PipsPager>(),
                false /* isAttached */,
                ValueHelper<int>::BoxValueIfNecessary(5),
                winrt::PropertyChangedCallback(&OnMaxVisualIndicatorsPropertyChanged));
    }
    if (!s_NextButtonStyleProperty)
    {
        s_NextButtonStyleProperty =
            InitializeDependencyProperty(
                L"NextButtonStyle",
                winrt::name_of<winrt::Style>(),
                winrt::name_of<winrt::PipsPager>(),
                false /* isAttached */,
                ValueHelper<winrt::Style>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnNextButtonStylePropertyChanged));
    }
    if (!s_NextButtonVisibilityProperty)
    {
        s_NextButtonVisibilityProperty =
            InitializeDependencyProperty(
                L"NextButtonVisibility",
                winrt::name_of<winrt::PipsPagerButtonVisibility>(),
                winrt::name_of<winrt::PipsPager>(),
                false /* isAttached */,
                ValueHelper<winrt::PipsPagerButtonVisibility>::BoxValueIfNecessary(winrt::PipsPagerButtonVisibility::Collapsed),
                winrt::PropertyChangedCallback(&OnNextButtonVisibilityPropertyChanged));
    }
    if (!s_NumberOfPagesProperty)
    {
        s_NumberOfPagesProperty =
            InitializeDependencyProperty(
                L"NumberOfPages",
                winrt::name_of<int>(),
                winrt::name_of<winrt::PipsPager>(),
                false /* isAttached */,
                ValueHelper<int>::BoxValueIfNecessary(-1),
                winrt::PropertyChangedCallback(&OnNumberOfPagesPropertyChanged));
    }
    if (!s_OrientationProperty)
    {
        s_OrientationProperty =
            InitializeDependencyProperty(
                L"Orientation",
                winrt::name_of<winrt::Orientation>(),
                winrt::name_of<winrt::PipsPager>(),
                false /* isAttached */,
                ValueHelper<winrt::Orientation>::BoxValueIfNecessary(winrt::Orientation::Horizontal),
                winrt::PropertyChangedCallback(&OnOrientationPropertyChanged));
    }
    if (!s_PreviousButtonStyleProperty)
    {
        s_PreviousButtonStyleProperty =
            InitializeDependencyProperty(
                L"PreviousButtonStyle",
                winrt::name_of<winrt::Style>(),
                winrt::name_of<winrt::PipsPager>(),
                false /* isAttached */,
                ValueHelper<winrt::Style>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPreviousButtonStylePropertyChanged));
    }
    if (!s_PreviousButtonVisibilityProperty)
    {
        s_PreviousButtonVisibilityProperty =
            InitializeDependencyProperty(
                L"PreviousButtonVisibility",
                winrt::name_of<winrt::PipsPagerButtonVisibility>(),
                winrt::name_of<winrt::PipsPager>(),
                false /* isAttached */,
                ValueHelper<winrt::PipsPagerButtonVisibility>::BoxValueIfNecessary(winrt::PipsPagerButtonVisibility::Collapsed),
                winrt::PropertyChangedCallback(&OnPreviousButtonVisibilityPropertyChanged));
    }
    if (!s_SelectedIndicatorButtonStyleProperty)
    {
        s_SelectedIndicatorButtonStyleProperty =
            InitializeDependencyProperty(
                L"SelectedIndicatorButtonStyle",
                winrt::name_of<winrt::Style>(),
                winrt::name_of<winrt::PipsPager>(),
                false /* isAttached */,
                ValueHelper<winrt::Style>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnSelectedIndicatorButtonStylePropertyChanged));
    }
    if (!s_SelectedPageIndexProperty)
    {
        s_SelectedPageIndexProperty =
            InitializeDependencyProperty(
                L"SelectedPageIndex",
                winrt::name_of<int>(),
                winrt::name_of<winrt::PipsPager>(),
                false /* isAttached */,
                ValueHelper<int>::BoxValueIfNecessary(0),
                winrt::PropertyChangedCallback(&OnSelectedPageIndexPropertyChanged));
    }
    if (!s_TemplateSettingsProperty)
    {
        s_TemplateSettingsProperty =
            InitializeDependencyProperty(
                L"TemplateSettings",
                winrt::name_of<winrt::PipsPagerTemplateSettings>(),
                winrt::name_of<winrt::PipsPager>(),
                false /* isAttached */,
                ValueHelper<winrt::PipsPagerTemplateSettings>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnTemplateSettingsPropertyChanged));
    }
}

void PipsPagerProperties::ClearProperties()
{
    s_DefaultIndicatorButtonStyleProperty = nullptr;
    s_MaxVisualIndicatorsProperty = nullptr;
    s_NextButtonStyleProperty = nullptr;
    s_NextButtonVisibilityProperty = nullptr;
    s_NumberOfPagesProperty = nullptr;
    s_OrientationProperty = nullptr;
    s_PreviousButtonStyleProperty = nullptr;
    s_PreviousButtonVisibilityProperty = nullptr;
    s_SelectedIndicatorButtonStyleProperty = nullptr;
    s_SelectedPageIndexProperty = nullptr;
    s_TemplateSettingsProperty = nullptr;
}

void PipsPagerProperties::OnDefaultIndicatorButtonStylePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PipsPager>();
    winrt::get_self<PipsPager>(owner)->OnPropertyChanged(args);
}

void PipsPagerProperties::OnMaxVisualIndicatorsPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PipsPager>();
    winrt::get_self<PipsPager>(owner)->OnPropertyChanged(args);
}

void PipsPagerProperties::OnNextButtonStylePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PipsPager>();
    winrt::get_self<PipsPager>(owner)->OnPropertyChanged(args);
}

void PipsPagerProperties::OnNextButtonVisibilityPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PipsPager>();
    winrt::get_self<PipsPager>(owner)->OnPropertyChanged(args);
}

void PipsPagerProperties::OnNumberOfPagesPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PipsPager>();
    winrt::get_self<PipsPager>(owner)->OnPropertyChanged(args);
}

void PipsPagerProperties::OnOrientationPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PipsPager>();
    winrt::get_self<PipsPager>(owner)->OnPropertyChanged(args);
}

void PipsPagerProperties::OnPreviousButtonStylePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PipsPager>();
    winrt::get_self<PipsPager>(owner)->OnPropertyChanged(args);
}

void PipsPagerProperties::OnPreviousButtonVisibilityPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PipsPager>();
    winrt::get_self<PipsPager>(owner)->OnPropertyChanged(args);
}

void PipsPagerProperties::OnSelectedIndicatorButtonStylePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PipsPager>();
    winrt::get_self<PipsPager>(owner)->OnPropertyChanged(args);
}

void PipsPagerProperties::OnSelectedPageIndexPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PipsPager>();
    winrt::get_self<PipsPager>(owner)->OnPropertyChanged(args);
}

void PipsPagerProperties::OnTemplateSettingsPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PipsPager>();
    winrt::get_self<PipsPager>(owner)->OnPropertyChanged(args);
}

void PipsPagerProperties::DefaultIndicatorButtonStyle(winrt::Style const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPager*>(this)->SetValue(s_DefaultIndicatorButtonStyleProperty, ValueHelper<winrt::Style>::BoxValueIfNecessary(value));
    }
}

winrt::Style PipsPagerProperties::DefaultIndicatorButtonStyle()
{
    return ValueHelper<winrt::Style>::CastOrUnbox(static_cast<PipsPager*>(this)->GetValue(s_DefaultIndicatorButtonStyleProperty));
}

void PipsPagerProperties::MaxVisualIndicators(int value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPager*>(this)->SetValue(s_MaxVisualIndicatorsProperty, ValueHelper<int>::BoxValueIfNecessary(value));
    }
}

int PipsPagerProperties::MaxVisualIndicators()
{
    return ValueHelper<int>::CastOrUnbox(static_cast<PipsPager*>(this)->GetValue(s_MaxVisualIndicatorsProperty));
}

void PipsPagerProperties::NextButtonStyle(winrt::Style const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPager*>(this)->SetValue(s_NextButtonStyleProperty, ValueHelper<winrt::Style>::BoxValueIfNecessary(value));
    }
}

winrt::Style PipsPagerProperties::NextButtonStyle()
{
    return ValueHelper<winrt::Style>::CastOrUnbox(static_cast<PipsPager*>(this)->GetValue(s_NextButtonStyleProperty));
}

void PipsPagerProperties::NextButtonVisibility(winrt::PipsPagerButtonVisibility const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPager*>(this)->SetValue(s_NextButtonVisibilityProperty, ValueHelper<winrt::PipsPagerButtonVisibility>::BoxValueIfNecessary(value));
    }
}

winrt::PipsPagerButtonVisibility PipsPagerProperties::NextButtonVisibility()
{
    return ValueHelper<winrt::PipsPagerButtonVisibility>::CastOrUnbox(static_cast<PipsPager*>(this)->GetValue(s_NextButtonVisibilityProperty));
}

void PipsPagerProperties::NumberOfPages(int value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPager*>(this)->SetValue(s_NumberOfPagesProperty, ValueHelper<int>::BoxValueIfNecessary(value));
    }
}

int PipsPagerProperties::NumberOfPages()
{
    return ValueHelper<int>::CastOrUnbox(static_cast<PipsPager*>(this)->GetValue(s_NumberOfPagesProperty));
}

void PipsPagerProperties::Orientation(winrt::Orientation const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPager*>(this)->SetValue(s_OrientationProperty, ValueHelper<winrt::Orientation>::BoxValueIfNecessary(value));
    }
}

winrt::Orientation PipsPagerProperties::Orientation()
{
    return ValueHelper<winrt::Orientation>::CastOrUnbox(static_cast<PipsPager*>(this)->GetValue(s_OrientationProperty));
}

void PipsPagerProperties::PreviousButtonStyle(winrt::Style const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPager*>(this)->SetValue(s_PreviousButtonStyleProperty, ValueHelper<winrt::Style>::BoxValueIfNecessary(value));
    }
}

winrt::Style PipsPagerProperties::PreviousButtonStyle()
{
    return ValueHelper<winrt::Style>::CastOrUnbox(static_cast<PipsPager*>(this)->GetValue(s_PreviousButtonStyleProperty));
}

void PipsPagerProperties::PreviousButtonVisibility(winrt::PipsPagerButtonVisibility const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPager*>(this)->SetValue(s_PreviousButtonVisibilityProperty, ValueHelper<winrt::PipsPagerButtonVisibility>::BoxValueIfNecessary(value));
    }
}

winrt::PipsPagerButtonVisibility PipsPagerProperties::PreviousButtonVisibility()
{
    return ValueHelper<winrt::PipsPagerButtonVisibility>::CastOrUnbox(static_cast<PipsPager*>(this)->GetValue(s_PreviousButtonVisibilityProperty));
}

void PipsPagerProperties::SelectedIndicatorButtonStyle(winrt::Style const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPager*>(this)->SetValue(s_SelectedIndicatorButtonStyleProperty, ValueHelper<winrt::Style>::BoxValueIfNecessary(value));
    }
}

winrt::Style PipsPagerProperties::SelectedIndicatorButtonStyle()
{
    return ValueHelper<winrt::Style>::CastOrUnbox(static_cast<PipsPager*>(this)->GetValue(s_SelectedIndicatorButtonStyleProperty));
}

void PipsPagerProperties::SelectedPageIndex(int value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPager*>(this)->SetValue(s_SelectedPageIndexProperty, ValueHelper<int>::BoxValueIfNecessary(value));
    }
}

int PipsPagerProperties::SelectedPageIndex()
{
    return ValueHelper<int>::CastOrUnbox(static_cast<PipsPager*>(this)->GetValue(s_SelectedPageIndexProperty));
}

void PipsPagerProperties::TemplateSettings(winrt::PipsPagerTemplateSettings const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPager*>(this)->SetValue(s_TemplateSettingsProperty, ValueHelper<winrt::PipsPagerTemplateSettings>::BoxValueIfNecessary(value));
    }
}

winrt::PipsPagerTemplateSettings PipsPagerProperties::TemplateSettings()
{
    return ValueHelper<winrt::PipsPagerTemplateSettings>::CastOrUnbox(static_cast<PipsPager*>(this)->GetValue(s_TemplateSettingsProperty));
}

winrt::event_token PipsPagerProperties::SelectedIndexChanged(winrt::TypedEventHandler<winrt::PipsPager, winrt::PipsPagerSelectedIndexChangedEventArgs> const& value)
{
    return m_selectedIndexChangedEventSource.add(value);
}

void PipsPagerProperties::SelectedIndexChanged(winrt::event_token const& token)
{
    m_selectedIndexChangedEventSource.remove(token);
}
