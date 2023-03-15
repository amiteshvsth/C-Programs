#include <stdio.h>

int main() {
int n, i;

printf("Enter an integer n: ");
scanf("%d", &n);

printf("The prime factors of %d are: ", n);
while (n > 1) {
for (i = 2; i <= n; i++) {
if (n % i == 0) {
printf("%d ", i);
n = n / i;
break;
}
}
}
printf("\n");
return 0;
}

// When run with n = 60, the program outputs:
// The prime factors of 60 are: 2 2 3 5
// When run with n = 79, the program outputs:
// The prime factors of 79 are: 79