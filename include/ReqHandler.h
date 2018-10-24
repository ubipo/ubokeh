#pragma once

#include "./Ubokeh.h"

using namespace Ubokeh;

struct Ubokeh::ReqHandler {
  virtual ReqRes handleReq(char* body);
};
