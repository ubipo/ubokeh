
#include "./Ubokeh.h"
#include "UhServer.h"
#include "HandlerSetter.h"

#include <stdexcept>

using byte = unsigned char;

namespace Ubokeh {
    UhServer::UhServer(unsigned int port, LogHandler logHandler) : logHandler(logHandler) {
        this->port = port;
    };

    UhServer::~UhServer() {
    };

    void UhServer::testLog() {
        log(INFO, "AAAAAAAAAH, I'm coming from within");
    };

    void UhServer::log(Levels level, const char* msg) {
        logHandler(level, "UBOKEH", msg);
    };

    UhServer::HandlerSetter UhServer::getHandlerSetter(const char* path) {
        HandlerSetter handlerSetter(this->pathMap);
        return handlerSetter;
    };
}

// void Ubokeh::UhServer::init() {
//     // server.reset(new WiFiServer(port));
// };

// void Ubokeh::getHandler(httpMethods method, char* path, ReqHandler* pReqHandler) {
//     PathMap::iterator pathIt = pathMap.find(path);
//     if (pathIt == pathMap.end()) {
//         Serial.println("Jajajaja, Path Not Found");
//         pReqHandler = nullptr;
//     } else {
//         MethodMap methodMap = pathIt->second;
//         MethodMap::iterator methodIt = methodMap.find(method);
//         if (methodIt == methodMap.end()) {
//             Serial.println("Jajajaja, Illegal Method");
//             pReqHandler = nullptr;
//         } else {
//             ReqHandler reqHandler = methodIt->second;
//             Serial.println("Request handler found!");
//             *pReqHandler = reqHandler;
//         }
//     }
// }
