#include <stdio.h>
#include <math.h>

int main() {
double x, sin_x, term;
int i, fact;

printf("Enter a value for x: ");
scanf("%lf", &x);

sin_x = 0;
term = x;
fact = 1;
for (i = 1; term > 1e-10; i++) {
sin_x += term;
term = -term * x * x / (fact * (fact + 1));
fact += 2;
}

printf("sin(%lf) = %lf\n", x, sin_x);
return 0;
}