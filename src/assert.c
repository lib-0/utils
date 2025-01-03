#include "-0_utils.h"

#include <stdlib.h>

void g_assert(bool condition) {
  if (!condition) {
    abort();
  }
}
