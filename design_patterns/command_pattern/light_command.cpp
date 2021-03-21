#include "light_command.h"

LightCommand::LightCommand(Light light)
{
    light_ = light;
}

void LightCommand::Execute()
{
    light_.On();
}

void LightCommand::Unexecute()
{
    light_.Off();
}