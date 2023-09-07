#include <stdio.h>
#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
    if (new_size == 0) {
        // If new_size is zero, equivalent to free(ptr)
        free(ptr);
        return NULL;
    }

    if (ptr == NULL) {
        // If ptr is NULL, equivalent to malloc(new_size)
        return malloc(new_size);
    }

    if (new_size == old_size) {
        // If new_size is equal to old_size, no need to reallocate
        return ptr;
    }

    // Allocate memory for the new_size
    void *new_ptr = malloc(new_size);

    if (new_ptr == NULL) {
        // If malloc fails, return NULL
        return NULL;
    }

    // Determine the minimum of old_size and new_size for copying
    unsigned int min_size = (old_size < new_size) ? old_size : new_size;

    // Copy contents from the old_ptr to the new_ptr
    for (unsigned int i = 0; i < min_size; i++) {
        *((char *)new_ptr + i) = *((char *)ptr + i);
    }

    // Free the old_ptr
    free(ptr);

    return new_ptr;
}
