#include "functions.h"

using v8::FunctionTemplate;

NAN_MODULE_INIT(InitAll) {
    SynchronousSocket::Init(target);
}

NODE_MODULE(SynchronousSocket, InitAll)
