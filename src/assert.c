#define G_EXPORT
#include "-0_utils.h"
#undef G_EXPORT

#include <stdlib.h>

#include "-0/common_export.h"

G_API void g_0_assert(bool condition) {
  if (!condition) {
    abort();
  }
}
