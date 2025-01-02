#define G_THIS
#include "-0_utils.h"
#undef G_THIS

#include <stddef.h>
#include <string.h>

#define G_THIS
#include "-0_common.h"
#undef G_THIS

G_EXPORT void g_0_bzero(void *ptr, size_t size) { memset(ptr, 0, size); }
