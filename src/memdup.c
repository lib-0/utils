#define G_THIS
#include "-0_utils.h"
#undef G_THIS

#include <stdlib.h>
#include <string.h>

#define G_THIS
#include "-0_common.h"
#undef G_THIS

G_EXPORT void *g_0_memdup(void *ptr, size_t size) {
  void *const result = malloc(size);
  if (result) {
    memcpy(result, ptr, size);
  }
  return result;
}
