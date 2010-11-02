#ifndef LEFTBUTTONMETHOD_H
#define LEFTBUTTONMETHOD_H

#include "oscservermethod.h"
#include <QDebug>

class LeftButtonMethod : public OscServerMethod
{
public:
    LeftButtonMethod(WOscContainer* parent,
                     WOscReceiver* receiverContext,
                     const char* methodName,
                     const char* methodDescription);
    virtual void Method(
            const WOscMessage* message,
            const WOscTimeTag& when,
            const WOscNetReturn* networkReturnAddress);
};

#endif // LEFTBUTTONMETHOD_H
