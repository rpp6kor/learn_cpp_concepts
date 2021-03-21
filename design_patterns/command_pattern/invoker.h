#ifndef INVOKER_H_
#define INVOKER_H_

#include "light_command.h"

class Invoker
{
    public:
    Invoker(Icommand* command);
    void Click();
    void UnClick();

    private:
    Icommand* command_;
    //Icommand* off_command_;
};

#endif