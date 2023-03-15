#include <stdio.h>
int main() {
    int numerator, denominator, quotient, remainder;
    printf("Enter numerator: ");
    scanf("%d", &numerator);
    printf("Enter denominator: ");
    scanf("%d", &denominator);

    // Computes quotient
    quotient = numerator / denominator;

    // Computes remainder
    remainder = numerator % denominator;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    return 0;
}
