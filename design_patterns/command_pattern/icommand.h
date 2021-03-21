#ifndef ICOMMAND_H_
#define ICOMMAND_H_

class Icommand
{
    public:
    virtual void Execute() = 0;
    virtual void Unexecute() = 0;
};

#endif