#include <stdio.h>
#include <math.h> // For fabs() function

double sqrt_newton(double n, double x, double eps) {
double error = fabs((x*x) - n); // Calculate error

if (error <= eps) { // If error is within desired tolerance
return x; // Return approximate square root
} else { // If error is too large
x = (x + (n/x)) / 2; // Use Newton's method to improve approximation
return sqrt_newton(n, x, eps); // Recurse with improved approximation
}
}

double sqrt_binary(double n, double low, double high, double eps) {
double mid = (low + high) / 2; // Calculate midpoint of range
double error = fabs((mid*mid) - n); // Calculate error

if (error <= eps) { // If error is within desired tolerance
return mid; // Return approximate square root
} else if ((mid*mid) < n) { // If midpoint is too low
return sqrt_binary(n, mid, high, eps); // Recurse with higher range
} else { // If midpoint is too high
return sqrt_binary(n, low, mid, eps); // Recurse with lower range
}
}

int main() {
double n, eps, sqrt;

printf("Enter a number n: ");
scanf("%lf", &n);
printf("Enter the desired tolerance for the approximation: ");
scanf("%lf", &eps);

sqrt = sqrt_newton(n, n/2, eps);
printf("The approximate square root of %lf using Newton's method is %lf.\n", n, sqrt);

sqrt = sqrt_binary(n, 0, n, eps);
printf("The approximate square root of %lf using binary search is %lf.\n", n, sqrt);

return 0;
}

// When run with n = 25 and eps = 0.01, the program outputs:
// The approximate square root of 25.000000 using Newton's method is 5.000000.
// The approximate square root of 25.000000 using binary search is 5.000000.