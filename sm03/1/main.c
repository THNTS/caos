#include <stdio.h>
#include <stdint.h>

uint32_t satsum(uint32_t v1, uint32_t v2) {
    int32_t result;
    if (_builtin_add_overflow(v1, v2, &result)) {
        result = 0u - 1u;
        return result;
    } else {
        result = v1 + v2;
        return result;
    }
}