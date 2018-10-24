#pragma once

#include "./Ubokeh.h"

#include "./UhServer.h"

using namespace Ubokeh;

/**
 * A class of HandlerSetters that can be used
 * for setting request handlers for a specific
 * method map and method.
 */
struct UhServer::HandlerSetter {
  MethodMap* pMethodMap;
  httpMethods method;

  public:
  /**
   * Constructs a new HandlerSetter
   * object with the given method map.
   */
  HandlerSetter(MethodMap& _rMethodMap);

  /**
   * Sets the MethodMap in which
   * handlers will be set.
   */
  HandlerSetter* setMethodMap(MethodMap& _rMethodMap);

  HandlerSetter* operator()(MethodMap& _rMethodMap);

  /**
   * Sets the http method for which
   * the handler is being set.
   * (defaults to httpMethods::GET)
   */
  HandlerSetter* operator[](httpMethods _method);

  /**
   * Sets the method handler for the
   * currently selected http method.
   */
  HandlerSetter* operator>(ReqHandler& reqHandler);
};
