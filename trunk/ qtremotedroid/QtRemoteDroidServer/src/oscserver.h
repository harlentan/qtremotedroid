
#ifndef OSCSERVER_H
#define OSCSERVER_H

#include "OSC_lgd/WOscReceiver.h"

class OscServer : public WOscReceiver
{
public:
    OscServer();
    virtual ~OscServer();

virtual void NetworkSend(
        const char* data, int dataLen,
        const WOscNetReturn* networkReturnAddress);


protected:

        virtual void HandleOffendingPackets(
                const char* const data,
                int dataLen, WOscException* exception);
        virtual void HandleNonmatchedMessages(
                const WOscMessage* msg,
                const WOscNetReturn* networkReturnAddress);
};

#endif // OSCSERVER_H
