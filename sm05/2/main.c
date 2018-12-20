#include <stdio.h>
#include <stdbool.h>

void normalize_path(char *buf) {
    char *result = buf;
    bool Pre_slash = false;
    while (*buf != '\0') {
        if (!Pre_slash && *buf == '/') {
            *result = '/';
            Pre_slash = true;
            ++result;
        } else if (*buf != '/') {
            *result = *buf;
            Pre_slash = false;
            ++result;
        }
        ++buf;
    }
    *result = '\0';
}