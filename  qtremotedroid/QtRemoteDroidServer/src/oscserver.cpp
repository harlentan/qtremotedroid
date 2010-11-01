#include "oscserver.h"

OscServer::OscServer()
{
}

void OscServer::HandleNonmatchedMessages(
        const WOscMessage *msg,
        const WOscNetReturn *networkReturnAddress)
{
}

void OscServer::HandleOffendingPackets(
        const char *const data, int dataLen,
        WOscException *exception)
{
}

void OscServer::NetworkSend(
        const char *data,
        int dataLen,
        const WOscNetReturn *networkReturnAddress){

}
