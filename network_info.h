#pragma once

#include "version_defines.h"

#define _STRINGIFY(x)                     #x
#define STRINGIFY(x)                      _STRINGIFY(x)
#define _CONCAT(x,y)                      x##y
#define CONCAT(x,y)                       _CONCAT(x,y)

#define USER_AGENT                        Mozilla/5.0 Gecko/20100101
