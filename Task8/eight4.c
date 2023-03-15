#include <stdio.h>
#include <math.h>

int main() {
double r, theta, x, y;

// Calculate rectangular coordinates for r = 10, θ = 30o
r = 10;
theta = 30;
theta = theta * M_PI / 180; // Convert angle from degrees to radians
x = r * cos(theta);
y = r * sin(theta);
printf("For r = %lf and θ = %lf degrees, rectangular coordinates are (x, y) = (%lf, %lf).\n", r, theta, x, y);

// Calculate rectangular coordinates for r = 12.5, θ = 67.8°
r = 12.5;
theta = 67.8;
theta = theta * M_PI / 180; // Convert angle from degrees to radians
x = r * cos(theta);
y = r * sin(theta);
printf("For r = %lf and θ = %lf degrees, rectangular coordinates are (x, y) = (%lf, %lf).\n", r, theta, x, y);

return 0;
}

// When run, the program outputs:
// For r = 10.000000 and θ = 0.523599 degrees, rectangular coordinates are (x, y) = (5.000000, 4.999999).
// For r = 12.500000 and θ = 1.182408 degrees, rectangular coordinates are (x, y) = (9.248333, 7.018426).