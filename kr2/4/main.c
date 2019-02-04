#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <inttypes.h>
#include <limits.h>
const int M = 52;

bool able_to_fit(int64_t a)
{

    if (a == INT64_MIN) {
        return true;
    }
    if (a < 0) {
        a *= -1;
    }
    const uint64_t largest_int = 1ULL << 53;

    while ((a > largest_int) && !(a & 1))
    {
        a >>= 1;
    }

    return a <= largest_int;
}

int main()
{
    int64_t a;
    while (scanf("%" PRId64, &a) == 1)
    {
        if (able_to_fit(a))
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}