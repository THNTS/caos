#include <stdio.h>
#include <stdint.h> 
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main(int argc, char **argv[])
{
    for (int count = 1; count < argc; ++count) {
        int answer;
        int32_t min;
        int32_t max;
        int32_t a = 0;
        bool flagSign = false;
        bool firstOne = true;
        for(size_t i = 0; i < sizeof(argv[count]); i++) {
            char symb = argv[count][i];
            printf("%c ", symb);
            if (isdigit(symb))
            {
                if (!flagSign)
                {
                    a = a * 10 + (int32_t)(symb - '0');
                } else
                {
                    a = a * 10 - (int32_t)(symb - '0');
                }
            } else if (symb == '-')
            {
                flagSign = true;
            } else
            {
                if (firstOne) {
                    firstOne = false;
                    max = (int32_t)a;
                    min = (int32_t)a;
                } else if (max < (int32_t)a) {
                    max = (int32_t)a;
                } else if (min > (int32_t)a) {
                    min = (int32_t)a;
                }
                a = 0;
                flagSign = false;
            }
        }
        
        

        if (min != max) {
            answer = (int)(max - min + 1);
        } else {
            answer = 1;
        }
        printf("%answer: ");
        printf("%d\n", answer);
    }
    return 0;
}