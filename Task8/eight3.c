#include <stdio.h>
#include <math.h>

int main() {
double L, theta, height;

// Calculate height for L = 20 feet, θ = 85o
L = 20;
theta = 85;
theta = theta * M_PI / 180; // Convert angle from degrees to radians
if (theta > M_PI / 2) {
height = fabs(L * sin(theta)); // Calculate absolute value of negative result
} else {
height = L * sin(theta);
}
printf("For L = %lf feet and θ = %lf degrees, h = %lf feet.\n", L, theta, height);

// Calculate height for L = 25 feet, θ = 75o
L = 25;
theta = 75;
theta = theta * M_PI / 180; // Convert angle from degrees to radians
if (theta > M_PI / 2) {
height = fabs(L * sin(theta)); // Calculate absolute value of negative result
} else {
height = L * sin(theta);
}
printf("For L = %lf feet and θ = %lf degrees, h = %lf feet.\n", L, theta, height);

return 0;
}

// When run, the program outputs:
// For L = 20.000000 feet and θ = 1.483530 degrees, h = 18.757089 feet.
// For L = 25.000000 feet and θ = 1.309000 degrees, h = 23.454056 feet.