#include "-0_utils.h"

#include <stddef.h>
#include <string.h>

void g_bzero(void *ptr, size_t size) { memset(ptr, 0, size); }
