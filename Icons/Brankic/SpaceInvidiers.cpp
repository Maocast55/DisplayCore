#include <Brankic.h>

namespace Brankic {
  const uint8_t SpaceInvidiers[] = {
    37, 27, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   7, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   7,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   7, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   7,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   7, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   7,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   7, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   7,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   7, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   7,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   7, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   7,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   7, 127, 127, 127, 127, 127, 127,   0,   0,   0, 127, 127, 127, 127, 127, 127, 127, 127, 127,   0,   0,   0, 127, 127, 127, 127, 127, 127,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   7, 127, 127, 127, 127, 127, 127,   0,   0,   0, 127, 127, 127, 127, 127, 127, 127, 127, 127,   0,   0,   0, 127, 127, 127, 127, 127, 127,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   7, 127, 127, 127, 127, 127, 127,   0,   0,   0, 127, 127, 127, 127, 127, 127, 127, 127, 127,   0,   0,   0, 127, 127, 127, 127, 127, 127,   0,   0,   0,   0,   0, 
      0,   0, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   0,   0, 
      0,   0, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   0,   0, 
      0,   0, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   0,   0, 
      0,   0, 127, 127, 127,   7,   0,   7, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   7,   0,   7, 127, 127, 127,   0,   0, 
      0,   0, 127, 127, 127,   7,   0,   7, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   7,   0,   7, 127, 127, 127,   0,   0, 
      0,   0, 127, 127, 127,   7,   0,   7, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   7,   0,   7, 127, 127, 127,   0,   0, 
      0,   0, 127, 127, 127,   7,   0,   7, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   7,   0,   7, 127, 127, 127,   0,   0, 
      0,   0, 127, 127, 127,   7,   0,   7, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   7,   0,   7, 127, 127, 127,   0,   0, 
      0,   0, 127, 127, 127,   7,   0,   7, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   7,   0,   7, 127, 127, 127,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127, 127, 127, 127,   7,   7, 127, 127, 127, 127, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127, 127, 127, 127,   7,   7, 127, 127, 127, 127, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127, 127, 127, 127,   7,   7, 127, 127, 127, 127, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};