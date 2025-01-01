#ifndef G_0_UTILS_H
#define G_0_UTILS_H

#include <stdbool.h>
#include <stddef.h>

void g_0_bzero(void *ptr, size_t size);
void *g_0_memdup(void *ptr, size_t size);
void *g_0_nonnull(void *ptr);
void g_0_assert(bool condition);

#endif
