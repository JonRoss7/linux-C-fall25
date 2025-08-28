#include <stdio.h>

long long fact(int n) {
if (n < 0) return -1; // error sentinel
if (n == 0) return 1;
return (long long)n * fact(n - 1);
}

int main(void) {
int n;
printf("Enter n: ");
if (scanf("%d", &n) != 1) return 1;
long long f = fact(n);
if (n < 0) { puts("Undefined for negatives"); return 1; }
printf("Factorial: %lld\n", f);
return 0;
}