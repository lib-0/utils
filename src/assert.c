#define G_THIS
#include "-0_utils.h"
#undef G_THIS

#include <stdlib.h>

#define G_THIS
#include "-0_common.h"
#undef G_THIS

G_EXPORT void g_0_assert(bool condition) {
  if (!condition) {
    abort();
  }
}
