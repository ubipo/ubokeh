// Uboceh.h - Unnecessary Badly-Documented Overly Complicated Esp Http-Server
#pragma once

#include "Ubokeh.h"

#include "./ReqHandler.h"

#include <ESP8266WiFi.h>
#include "HashMap.h"
#include "CstrHashMap.h"
#include "StaticCastHashFunc.h"

using byte = unsigned char;

using namespace Ubokeh;

/**
 * A class of which an instance runs 
 * and is used to configure a restfull
 * http server.
 */
class Ubokeh::UhServer {
  using MethodMap = HashMap<httpMethods, ReqHandler, 10, StaticCastHashFunc<httpMethods, 10>>;
  using PathMap = CstrHashMap<MethodMap, 20>;

  public:
  /**
   * Instanciates an Ubokeh object
   * with the given port.
   */
  UhServer(unsigned int port);
  ~UhServer();

  /**
   * Sets the request handler for
   * a bad (malformed) request.
   * The http body passed to the
   * handler contains the error
   * code and message seperated
   * by a space.
   */
  void setBadRequestRes(ReqHandler handler);

  /**
   * Sets the request handler for
   * a bad (malformed) request.
   * The http body passed to the
   * handler contains the error
   * code and message seperated
   * by a space.
   */
  void setInvalidMethodRes(ReqHandler handler);

  /**
   * Sets the request handler for
   * a request to an unknown path (404).
   * The http body passed to the
   * handler contains the requested
   * path.
   */
  void setNotFoundRes(ReqHandler handler);
  
  // class HandlerSetter;
  // class ReqHandler;
  // struct ReqRes;

  struct HandlerSetter;
  
  HandlerSetter getHandlerSetter(const char* path);

  
  void getHandler(httpMethods method, char* path, ReqHandler* pReqHandler);

  private:
  ReqHandler badRequestHandler;
  ReqHandler invalidMethodHandler;
  ReqHandler notFoundHandler;
  bool isBound; 
  unsigned int port;
  PathMap pathMap;
  // std::unique_ptr<WiFiServer> server;
};
