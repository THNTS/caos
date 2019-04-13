#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <inttypes.h>

int main() {
    int N;
    while (scanf("%d", &N) != EOF) {
        pid_t c = fork();
        wait(NULL);
        if (c < 0) {
            printf("-1\n");
            exit(1);
        }
        
        
        printf("%i\n", N);
    }
    exit(0);
}