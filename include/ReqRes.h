#include "Ubokeh.h"

using namespace Ubokeh;

struct Ubokeh::ReqRes {
    unsigned short statusCode;
    char* responseBody;
};