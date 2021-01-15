#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    if(!ptr) {
        return mx_strnew(size);
    }
    else if((int)size < 1) {
        mx_strdel(ptr);
        return ptr;
    }
    else {
        char *new = mx_strnew(size);
        if(!new) {
            // return NULL;
        }
        else {
            mx_memcpy(new, ptr, size);
            mx_strdel(ptr);
            return new;
        }
    }
    return NULL;
}
