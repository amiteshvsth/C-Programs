#include <stdio.h>

void swap(int *a, int *b) {
int temp;
temp = *a;
*a = *b;
*b = temp;
}

int main() {
int a, b;

printf("Enter the value of a: ");
scanf("%d", &a);
printf("Enter the value of b: ");
scanf("%d", &b);

swap(&a, &b);

printf("After exchanging the values, a is %d and b is %d.\n", a, b);
return 0;
}

// When run with a = 5 and b = 10, the program outputs:
// After exchanging the values, a is 10 and b is 5.