#include <stdio.h>

int main() {
int n, i;

printf("Enter an integer n: ");
scanf("%d", &n);

for (i = 2; i <= n / 2; i++) {
if (n % i == 0) {
printf("The smallest exact divisor of %d is %d.\n", n, i);
return 0;
}
}
printf("%d is a prime number.\n", n);
return 0;
}

// When run with n = 12, the program outputs:
// The smallest exact divisor of 12 is 2.
// When run with n = 7, the program outputs:
// 7 is a prime number.