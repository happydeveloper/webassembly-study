#include "emscripten.h"
#include "src/webp/encode.h"

EMSCRIPTEN_KEEPALIVE
int version() {
  return WebPGetEncoderVersion();
}


EMSCRIPTEN_KEEPALIVE
const char * intro()
{
    return "web assembly";
}
