#ifndef OSCSERVERMETHOD_H
#define OSCSERVERMETHOD_H

#include "OSC_lgd/WOscReceiverMethod.h"
#include "netreturnaddress.h"
#include "oscservermethod.h"

class OscServerMethod : public WOscReceiverMethod
{
public:
    OscServerMethod(WOscContainer* parent,
                    WOscReceiver* receiverContext,
                    const char* methodName,
                    const char* methodDescription);
    /*virtual void Method(
            const WOscMessage *message,
            const WOscTimeTag& when,
            const NetReturnAddress* networkReturnAddress) = 0;
*/
private:
    //OscServerMethod();
};

#endif // OSCSERVERMETHOD_H
