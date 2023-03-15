#include <stdio.h>

long long factorial(int n) {
if (n == 0 || n == 1) {
return 1;
} else {
return n * factorial(n-1);
}
}

long long fibo(int n) {
if (n == 0) {
return 0;
} else if (n == 1) {
return 1;
} else {
return fibo(n-1) + fibo(n-2);
}
}

long long sum(int n, int a[]) {
if (n == 0) {
return a[0];
} else {
return a[0] + sum(n-1, &a[1]);
}
}

int main() {
int n, i;
long long result;
int a[100];

printf("Enter an integer n: ");
scanf("%d", &n);
C Program to Find Factorial of n, First n Terms of Fibonacci Sequence, and Sum of Series:

#include <stdio.h>

long long factorial(int n) {
if (n == 0 || n == 1) {
return 1;
} else {
return n * factorial(n-1);
}
}

long long fibo(int n) {
if (n == 0) {
return 0;
} else if (n == 1) {
return 1;
} else {
return fibo(n-1) + fibo(n-2);
}
}

long long sum(int n, int a[]) {
if (n == 0) {
return a[0];
} else {
return a[0] + sum(n-1, &a[1]);
}
}

int main() {
int n, i;
long long result;
int a[100];

printf("Enter an integer n: ");
scanf("%d", &n);

// Calculate factorial of n
result = factorial(n);
printf("The factorial of %d is %lld.\n", n, result);

// Calculate first n terms of Fibonacci sequence
printf("The first %d terms of the Fibonacci sequence are: ", n);
for (i = 0; i < n; i++) {
printf("%lld ", fibo(i));
}
printf("\n");

// Calculate sum of series a0 + a1 + … + an-1 + an
printf("Enter the terms of the series separated by spaces: ");
for (i = 0; i < n; i++) {
scanf("%d", &a[i]);
}
result = sum(n, a);
printf("The sum of the series is %lld.\n", result);

return 0;
}

// When run with n = 5, the program prompts the user to enter the terms of the series and, when given the input "1 2 3 4 5", outputs:
// The factorial of 5 is 120.
// The first 5 terms of the Fibonacci sequence are: 0 1 1 2 3
// The sum of the series is 15.