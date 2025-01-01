#include "-0_utils.h"

#include <stdlib.h>

#include "-0_debug.h"

void g_0_assert(G_0_DEBUG_FUNCTION_PARAMETER_PRELUDE bool condition) {
  G_0_DEBUG_FUNCTION_BODY_PRELUDE;
  if (!condition) {
    abort();
  }
}
