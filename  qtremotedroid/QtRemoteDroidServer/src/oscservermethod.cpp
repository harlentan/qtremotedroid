#include "oscservermethod.h"

OscServerMethod::OscServerMethod(WOscContainer *parent,
                                 WOscReceiver *receiverContext,
                                 const char *methodName,
                                 const char *methodDescription):
WOscReceiverMethod(parent,
                   receiverContext,
                   methodName,
                   methodDescription)
{

}
