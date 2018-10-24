#include "Ubokeh.h"

using namespace Ubokeh;

struct Ubokeh::ReqRes {
    short statusCode;
    char* responseBody;
};