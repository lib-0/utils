#define G_EXPORT
#include "-0_utils.h"
#undef G_EXPORT

#include <stdlib.h>
#include <string.h>

#include "-0/common_export.h"

G_API void *g_0_memdup(void *ptr, size_t size) {
  void *const result = malloc(size);
  if (result) {
    memcpy(result, ptr, size);
  }
  return result;
}
