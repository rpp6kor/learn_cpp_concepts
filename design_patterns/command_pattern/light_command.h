#ifndef LIGHT_COMMAND_H_
#define LIGHT_COMMAND_H_

#include "light.h"
#include "icommand.h"

class LightCommand : public Icommand
{
    public:
    LightCommand(Light light);
    void Execute();
    void Unexecute();

    private:
    Light light_;
};

#endif