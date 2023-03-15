#include <stdio.h>

int main() {
int a, b, temp;

printf("Enter the value of a: ");
scanf("%d", &a);
printf("Enter the value of b: ");
scanf("%d", &b);

temp = a;
a = b;
b = temp;

printf("After exchanging the values, a is %d and b is %d.\n", a, b);
return 0;
}

// When run with a = 5 and b = 10, the program outputs:
// After exchanging the values, a is 10 and b is 5.