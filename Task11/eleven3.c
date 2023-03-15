#include <stdio.h>

int main() {
int n, i, sum = 0;
int *a;

printf("Enter the number of values to be summed: ");
scanf("%d", &n);

a = (int *)malloc(n * sizeof(int)); // Allocate memory for n values

printf("Enter the values to be summed: ");
for (i = 0; i < n; i++) {
scanf("%d", a + i); // Input values using pointer arithmetic
}

for (i = 0; i < n; i++) {
sum += *(a + i); // Sum values using pointer arithmetic
}

printf("The sum of the values is %d.\n", sum);
free(a); // Free allocated memory
return 0;
}

// When run with n = 5 and the input "1 2 3 4 5", the program outputs:
// The sum of the values is 15.