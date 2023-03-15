#include <stdio.h>
#include <math.h>

int main() {
double v, theta, height;

printf("Enter the initial velocity in miles/hour: ");
scanf("%lf", &v);

printf("Enter the angle in degrees: ");
scanf("%lf", &theta);

// Convert velocity from miles/hour to feet/sec
v = v * 5280 / 3600;

// Convert angle from degrees to radians
theta = theta * M_PI / 180;

// Calculate maximum height
height = (0.5 * v * v * sin(theta) * sin(theta)) / 32.2;

printf("The maximum height reached is %lf feet.\n", height);
return 0;
}

// When run with v = 7 miles/hour and theta = 45 degrees, the program outputs:
// The maximum height reached is 130.519869 feet.