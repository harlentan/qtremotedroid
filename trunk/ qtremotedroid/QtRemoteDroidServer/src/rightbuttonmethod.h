#ifndef RIGHTBUTTONMETHOD_H
#define RIGHTBUTTONMETHOD_H

#include "oscservermethod.h"
#include <QDebug>

class RightButtonMethod : public OscServerMethod
{
public:
    RightButtonMethod(WOscContainer* parent,
                      WOscReceiver* receiverContext,
                      const char* methodName,
                      const char* methodDescription);


    virtual void Method(
            const WOscMessage* message,
            const WOscTimeTag& when,
            const WOscNetReturn* networkReturnAddress);
};

#endif // RIGHTBUTTONMETHOD_H
