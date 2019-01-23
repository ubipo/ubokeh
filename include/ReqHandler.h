#pragma once

#include "./Ubokeh.h"

struct Ubokeh::ReqHandler {
  virtual Ubokeh::ReqRes handleReq(char* body);
};
