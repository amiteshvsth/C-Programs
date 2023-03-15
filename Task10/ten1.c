#include <stdio.h>

int main() {
int n, i;
long long factorial, fib1, fib2, fib_temp;

printf("Enter an integer n: ");
scanf("%d", &n);

// Calculate factorial of n
factorial = 1;
for (i = 1; i <= n; i++) {
factorial *= i;
}
printf("The factorial of %d is %lld.\n", n, factorial);

// Calculate first n terms of Fibonacci sequence
fib1 = 0;
fib2 = 1;
printf("The first %d terms of the Fibonacci sequence are: %d %d ", n, fib1, fib2);
for (i = 3; i <= n; i++) {
fib_temp = fib1 + fib2;
printf("%lld ", fib_temp);
fib1 = fib2;
fib2 = fib_temp;
}
printf("\n");

return 0;
}

// When run with n = 10, the program outputs:
// The factorial of 10 is 3628800.
// The first 10 terms of the Fibonacci sequence are: 0 1 1 2 3 5 8 13 21 34