#define G_EXPORT
#include "-0_utils.h"
#undef G_EXPORT

#include <stddef.h>
#include <string.h>

#include "-0/common_export.h"

G_API void g_0_bzero(void *ptr, size_t size) { memset(ptr, 0, size); }
