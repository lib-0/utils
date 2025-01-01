#include "-0_utils.h"

#include <stddef.h>
#include <string.h>

#include "-0_debug.h"

void g_0_bzero(G_0_DEBUG_FUNCTION_PARAMETER_PRELUDE void *ptr, size_t size) {
  G_0_DEBUG_FUNCTION_BODY_PRELUDE;
  memset(ptr, 0, size);
}
