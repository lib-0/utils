#ifndef G_0_UTILS_H
#define G_0_UTILS_H

#include <stdbool.h>
#include <stddef.h>

#include "-0/debug.h"

void g_0_bzero(G_0_DEBUG_FUNCTION_PARAMETER_PRELUDE void *ptr, size_t size);
void *g_0_memdup(G_0_DEBUG_FUNCTION_PARAMETER_PRELUDE void *ptr, size_t size);
void *g_0_nonnull(G_0_DEBUG_FUNCTION_PARAMETER_PRELUDE void *ptr);
void g_0_assert(G_0_DEBUG_FUNCTION_PARAMETER_PRELUDE bool condition);

#endif
