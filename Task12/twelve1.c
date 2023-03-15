#include <stdio.h>

int main() {
int a[100], n, i, j;

printf("Enter the number of elements in the array: ");
scanf("%d", &n);

printf("Enter the elements of the array: ");
for (i = 0; i < n; i++) {
scanf("%d", &a[i]);
}

// Remove duplicates
for (i = 0; i < n; i++) {
for (j = i+1; j < n; j++) {
if (a[i] == a[j]) { // If duplicate found
n--; // Decrement number of elements
for (int k = j; k < n; k++) { // Shift elements to the left
a[k] = a[k+1];
}
j--; // Decrement j to compensate for removed element
}
}
}

printf("The array after removing duplicates: ");
for (i = 0; i < n; i++) {
printf("%d ", a[i]);
}
printf("\n");

return 0;
}

// When run with the input "8 5 6 7 5 6 8 9 5", the program outputs:
// The array after removing duplicates: 8 5 6 7 9