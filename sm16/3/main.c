#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <inttypes.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        printf("%i", i + 1);
        if (i == N - 1) {
            printf("\n");
            exit(0);            
        }
        fflush(stdout);
        pid_t c = fork();
        if (c < 0) {
            exit(1);
        }
        if (c != 0)
            break;
        printf(" ");
    }
    wait(NULL);
}