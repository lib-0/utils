#include "-0_utils.h"

#include <stdlib.h>
#include <string.h>

#include "-0_debug.h"

void *g_0_memdup(G_P void *ptr, size_t size) {
  G_B;
  void *const result = malloc(size);
  if (result) {
    memcpy(result, ptr, size);
  }
  return result;
}
