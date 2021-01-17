#include "libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
    if (fd <= 0 || buf_size < 0) {
        return -2;
    }
    // else if ()
}
