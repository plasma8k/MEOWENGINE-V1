#pragma once
#include "../SDK/Prediction.h"

struct UserCmd;

namespace EnginePrediction
{
    void run(UserCmd* cmd) noexcept;
    int getFlags() noexcept;
}