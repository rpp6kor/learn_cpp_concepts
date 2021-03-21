#include <iostream>

#include "light_command.h"
#include "invoker.h"

int main()
{
    Light olight;
    LightCommand olight_command{olight};
    Invoker oinvoker{&olight_command};

    oinvoker.Click();
    oinvoker.UnClick();

    return 0;
}