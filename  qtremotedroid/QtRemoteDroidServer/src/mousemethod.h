#ifndef MOUSEMETHOD_H
#define MOUSEMETHOD_H

#include "oscservermethod.h"

class MouseMethod : public OscServerMethod
{
public:
    MouseMethod(WOscContainer* parent,
                WOscReceiver* receiverContext,
                const char* methodName,
                const char* methodDescription);

    virtual void Method(
            const WOscMessage *message,
            const WOscTimeTag& when,
            const NetReturnAddress* networkReturnAddress);
};

#endif // MOUSEMETHOD_H
