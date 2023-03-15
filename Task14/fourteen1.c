#include <stdio.h>

int main() {
int a[100], n, i, max, min;

printf("Enter the number of elements in the array: ");
scanf("%d", &n);

printf("Enter the elements of the array: ");
for (i = 0; i < n; i++) {
scanf("%d", &a[i]);
}

max = min = a[0]; // Initialize max and min to first element in array
for (i = 1; i < n; i++) { // Loop through remaining elements
if (a[i] > max) { // If current element is larger than max
max = a[i]; // Set max to current element
}
if (a[i] < min) { // If current element is smaller than min
min = a[i]; // Set min to current element
}
}

printf("The maximum value in the array is %d.\n", max);
printf("The minimum value in the array is %d.\n", min);
return 0;
}

// When run with the input "5 8 3 2 9 1 4 7", the program outputs:
// The maximum value in the array is 9.
// The minimum value in the array is 1.