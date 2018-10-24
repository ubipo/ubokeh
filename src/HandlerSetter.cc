#include "HandlerSetter.h"


UhServer::HandlerSetter* UhServer::HandlerSetter::operator[](Ubokeh::httpMethods _method) {
    // Check if not in enum range
    if (_method < 0 || _method >= Ubokeh::noHttpMethods)
        return nullptr;

    // Set method
    method = _method;

    return this;
};

UhServer::HandlerSetter* UhServer::HandlerSetter::operator()(MethodMap& _rMethodMap) {
    setMethodMap(_rMethodMap);

    return this;
};

UhServer::HandlerSetter* UhServer::HandlerSetter::setMethodMap(MethodMap& _rMethodMap) {
    pMethodMap = &_rMethodMap;

    return this;
};

UhServer::HandlerSetter* UhServer::HandlerSetter::operator>(ReqHandler& reqHandler) {
    // Replace or add method's handler
    pMethodMap->put(method, reqHandler);

    return this;
};
