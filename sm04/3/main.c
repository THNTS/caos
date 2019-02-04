#include <stdio.h>
#include <stdint.h>

enum
{
    SGN = 1,
    E = 8,
    M = 23
};

union Number
{
    float f;
    uint32_t i;
};

uint32_t foo(uint32_t number, int shift, int mask)
{
    number = number >> shift;
    return number & mask;
}

FPClass fpclassf(float value, int *psign) {
    union Number number;
    number.f = value;
    int sign = foo(number.i, E + M, 1);
    int order = foo(number.i, M, (1 << E) - 1);
    int mantissa = foo(number.i, 0, (1 << M) - 1);
    *psign = sign;
    uint8_t max_order = -1;
    if (order == 0) {
        if (mantissa == 0) {
            return FFP_ZERO;
        } else {
            return FFP_DENORMALIZED;
        }
    } else if (order == max_order){
        if (mantissa != 0) {
            *psign = 0;
            return FFP_NAN;
        } else {
            return FFP_INF;
        }
    } else {
        return FFP_NORMALIZED;
    }
}