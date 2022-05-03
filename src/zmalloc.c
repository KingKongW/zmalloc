#include "zmalloc.h"

#include <stdio.h>

#define malloc(size) je_malloc(size)

void hello(void) {
    printf("Hello, World!\n");
}

void *zmalloc(size_t size) {
    void *ptr = malloc(size);

    return ptr;
}
