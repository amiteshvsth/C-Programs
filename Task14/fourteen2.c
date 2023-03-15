#include <stdio.h>

int main() {
int *a, n, i, max, min;

printf("Enter the number of elements in the list: ");
scanf("%d", &n);

a = (int *)malloc(n * sizeof(int)); // Allocate memory for n elements

printf("Enter the elements of the list: ");
for (i = 0; i < n; i++) {
scanf("%d", a + i); // Input elements using pointer arithmetic
}

max = min = a; // Initialize max and min to first element in list
for (i = 1; i < n; i++) { // Loop through remaining elements
if ((a + i) > max) { // If current element is larger than max
max = *(a + i); // Set max to current element using pointer arithmetic
}
if (*(a + i) < min) { // If current element is smaller than min
min = *(a + i); // Set min to current element using pointer arithmetic
}
}

printf("The maximum value in the list is %d.\n", max);
printf("The minimum value in the list is %d.\n", min);
free(a); // Free allocated memory
return 0;
}

// When run with the input "5 8 3 2 9 1 4 7", the program outputs:
// The maximum value in the list is 9.
// The minimum value in the list is 1.