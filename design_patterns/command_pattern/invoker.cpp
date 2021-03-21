#include "invoker.h"

Invoker::Invoker(Icommand* command)
{
    command_ = command;
}

void Invoker::Click()
{
    command_->Execute();
}

void Invoker::UnClick()
{
    command_->Unexecute();
}