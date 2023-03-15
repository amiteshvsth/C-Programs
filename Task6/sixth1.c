#include <stdio.h>
#include <math.h>
void main()
{
    float slope, x1, y1, x2, y2, dx, dy;
    printf("Program to find the slope of a line given two end points\n");
    printf("Enter X1: ");
    scanf("%f", &x1);

    printf("Enter Y1: ");
    scanf("%f", &y1);

    printf("Enter X2: ");
    scanf("%f", &x2);

    printf("Enter Y2: ");
    scanf("%f", &y2);

    dx = x2 - x1;
    dy = y2 - y1;
    slope = dy / dx;
    printf("Slope of the line with end points (%.2f, %.2f) and (%.2f, %.2f) = %.2f", x1, y1, x2, y2, slope);
}