#include "-0_utils.h"

#include <string.h>

#include "-0_allocator.h"

void *g_memdup(g_allocator_t *allocator, void *ptr, size_t size) {
  void *const result = g_alloc(allocator, size);
  if (result) {
    memcpy(result, ptr, size);
  }
  return result;
}
