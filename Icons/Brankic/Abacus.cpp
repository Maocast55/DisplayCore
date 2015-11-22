#include <Brankic.h>

namespace Brankic {
  const uint8_t Abacus[] = {
    28, 28, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   0, 
      0,   0, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   0, 
      0,   0, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127,   0, 
      0,   0, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127,   0, 
      0,   0, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127,   0, 
      0,   0, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127,   0, 
      0,   0, 127, 127,   0,   0,  37, 106,  33,   0,  37, 106,  34,   0,   0,   0,   0,   0,   0,   0,  37, 106,  34,   0,   0, 127, 127,   0, 
      0,   0, 127, 127,   0,   0, 108, 127, 105,   0, 112, 127, 105,   0,   0,   0,   0,   0,   0,   0, 112, 127, 105,   0,   0, 127, 127,   0, 
      0,   0, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   0, 
      0,   0, 127, 127,   0,   0, 112, 127, 105,   0, 112, 127, 105,   0,   0,   0,   0,   0,   0,   0, 112, 127, 105,   0,   0, 127, 127,   0, 
      0,   0, 127, 127,   0,   0,  49, 126,  43,   0,  46, 126,  43,   0,   0,   0,   0,   0,   0,   0,  46, 126,  43,   0,   0, 127, 127,   0, 
      0,   0, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127,   0, 
      0,   0, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127,   0, 
      0,   0, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127,   0, 
      0,   0, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,  39, 106,  33,   0,  57, 123,  34,   0,  42, 109,  34,   0,   0, 127, 127,   0, 
      0,   0, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0, 112, 127, 105,   1, 118, 127,  97,   0, 112, 127, 105,   0,   0, 127, 127,   0, 
      0,   0, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   0, 
      0,   0, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0, 112, 127, 105,   0, 111, 127,  91,   0, 112, 127, 105,   0,   0, 127, 127,   0, 
      0,   0, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,  51, 126,  40,   0,  43, 105,  28,   0,  48, 120,  39,   0,   0, 127, 127,   0, 
      0,   0, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127,   0, 
      0,   0, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127,   0, 
      0,   0, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127,   0, 
      0,   0, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127,   0, 
      0,   0, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   0, 
      0,   0, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};