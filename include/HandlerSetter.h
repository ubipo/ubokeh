#pragma once

#include "./Ubokeh.h"

#include "./UhServer.h"

/**
 * A class of HandlerSetters that can be used
 * for setting request handlers for a specific
 * path and method.
 */
struct UhServer::HandlerSetter {
  PathMap& pathMap;
  httpMethods* method;
  UhServer::HandlerSetter* newThis;

  public:
  /**
   * Constructs a new HandlerSetter
   * object with the given path map.
   * Use UhServer.getHandlerSetter()
   * to construct a usable handlerSetter.
   */
  HandlerSetter(PathMap& pathMap);

  UhServer::HandlerSetter& setPath(UhServer& uhServer, const char* path);

  /**
   * Sets the path 
   */
  HandlerSetter& operator()(UhServer& uhServer, const char* path);

  /**
   * Sets the http method for which
   * the handler is being set.
   * (defaults to httpMethods::GET)
   */
  HandlerSetter operator[](httpMethods _method);

  /**
   * Sets the method handler for the
   * currently selected http method.
   */
  HandlerSetter operator>(int& reqHandler);
};
