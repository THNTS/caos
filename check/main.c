#include <stdio.h>
#include <ctype.h>

int main() {
   int a;
   long long sum = 0;
   while ((a = getchar_unlocked()) != EOF) {
      if (isdigit(a)) {
         sum += (long long)(a - '0');
      }
   }
   printf("%lli\n", sum);
   return 0;
}