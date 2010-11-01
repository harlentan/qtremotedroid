#ifndef MOUSEMETHOD_H
#define MOUSEMETHOD_H

#include "oscservermethod.h"
#include <QDebug>

class MouseMethod : public OscServerMethod
{
public:
    MouseMethod(WOscContainer* parent,
                WOscReceiver* receiverContext,
                const char* methodName,
                const char* methodDescription);

    virtual void Method(
            const WOscMessage* message,
            const WOscTimeTag& when,
            const WOscNetReturn* networkReturnAddress);
};

#endif // MOUSEMETHOD_H
