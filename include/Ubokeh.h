#pragma once

#include <functional>
#include "HashMap.h"
#include "CstrHashMap.h"

namespace Ubokeh {
    using byte = unsigned char;
    enum Levels : byte {
        DEBUG, INFO, WARNING, ERROR, CRITICAL
    };
    using LogHandler = std::function<void(Levels level, const char* src, const char* msg)>;
    
    const byte noHttpMethods = 9;
    enum httpMethods : byte {
        GET, HEAD, POST, PUT, DELETE, CONNECT, OPTIONS, TRACE, PATCH,
        ANY // Represents fallback for any other methods
    };
    // const char* httpMethodsCString[] = {"GET", "HEAD", "POST", "PUT", "DELETE", "CONNECT", "OPTIONS", "TRACE", "PATCH"};

    struct ReqHandler;

    class UhServer;
    struct ReqRes;
}
