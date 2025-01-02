#define G_THIS
#include "-0_utils.h"
#undef G_THIS

#define G_THIS
#include "-0_common.h"
#undef G_THIS

G_EXPORT void *g_0_nonnull(void *ptr) {
  g_0_assert(ptr != NULL);
  return ptr;
}
