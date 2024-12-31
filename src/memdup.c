#include "-0_utils.h"

#include <stdlib.h>
#include <string.h>

void *g_0_memdup(void *ptr, size_t size) {
  void *const result = malloc(size);
  if (result) {
    memcpy(result, ptr, size);
  }
  return result;
}
