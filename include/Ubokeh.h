#pragma once

#include "HashMap.h"
#include "CstrHashMap.h"

namespace Ubokeh {
    using byte = unsigned char;
    const byte noHttpMethods = 9;
    enum httpMethods : byte {
        GET, HEAD, POST, PUT, DELETE, CONNECT, OPTIONS, TRACE, PATCH,
        ANY // Represents fallback for any other methods
    };
    const char* httpMethodsCString[noHttpMethods];

    struct ReqHandler;

    class UhServer;
    struct ReqRes;
}
