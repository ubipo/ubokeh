// #include "HandlerSetter.h"

// UhServer::HandlerSetter::HandlerSetter(PathMap& pathMap) : pathMap(pathMap) {};

// UhServer::HandlerSetter& UhServer::HandlerSetter::setPath(UhServer& uhServer, const char* path) {
//   this->newThis = &uhServer.getHandlerSetter(path);

//   return this.newThis;
// };

// UhServer::HandlerSetter UhServer::HandlerSetter::operator[](Ubokeh::httpMethods _method) {
//     // Check if not in enum range
//     if (_method < 0 || _method >= Ubokeh::noHttpMethods)
//         return nullptr;

//     // Set method
//     method = _method;

//     return *this;
// };

// UhServer::HandlerSetter& UhServer::HandlerSetter::operator()(UhServer& uhServer, const char* path) {
//     newThis = new UhServer::HandlerSetter(uhServer.getHandlerSetter(path));

//     return *newThis;
// };

// UhServer::HandlerSetter& UhServer::HandlerSetter::setMethodMap(MethodMap& _rMethodMap) {
//     UhServer::HandlerSetter newHandlerSetter()

//     return *this;
// };

// UhServer::HandlerSetter UhServer::HandlerSetter::operator>(int& reqHandler) {
//     // Replace or add method's handler
//     // pMethodMap->put(method, reqHandler);

//     return *this;
// };
