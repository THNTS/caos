#include <stdio.h>
#include <stdint.h> 
#include <stdlib.h>


int main(int argc, char *argv[])
{
    for (int count = 1; count < argc; ++count) {
        
        char *end;
        long result = strtol(argv[count], &end, 10);
        if (*argv[count] == '\0') {
            printf("%d\n", -1);
        } else if (*end != '\0') {
            printf("%d\n", -1);
        } else if ((int8_t)result == result) {
            printf("%d\n", 1);
        } else if ((int16_t)result == result) {
            printf("%d\n", 2);
        } else if ((int32_t)result == result) {
            printf("%d\n", 4);
        } else {
            printf("%d\n", -1);
        }

        
    }
    return 0;
}