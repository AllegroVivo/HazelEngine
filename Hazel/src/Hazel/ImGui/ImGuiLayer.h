﻿#pragma once

#include "Hazel/Layer.h"

namespace Hazel
{
    class HAZEL_API ImGuiLayer : public Layer
    {
    public:
        ImGuiLayer();
        ~ImGuiLayer();

        void OnAttach();
        void OnDetatch();
        void OnUpdate();
        void OnEvent(Event& event);
    private:
        float m_Time = 0.0f;
    };
}