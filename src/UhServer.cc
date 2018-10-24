
#include "./Ubokeh.h"
#include "UhServer.h"

#include <stdexcept>

using byte = unsigned char;

using namespace Ubokeh;

Ubokeh::UhServer::UhServer(unsigned int port) {
    this->port = port;
};

Ubokeh::UhServer::~UhServer() {
};

// void Ubokeh::UhServer::init() {
//     // server.reset(new WiFiServer(port));
// };

// const char* Ubokeh::httpMethodsCString[noHttpMethods] = {"GET", "HEAD", "POST", "PUT", "DELETE", "CONNECT", "OPTIONS", "TRACE", "PATCH"};

// Ubokeh::HandlerSetter::HandlerSetter(MethodMap& _rMethodMap) {
//     setMethodMap(_rMethodMap);
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
