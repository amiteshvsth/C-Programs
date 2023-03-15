#include <stdio.h>
float toFarenheit(float c)
{
    return ((c * 9.0 / 5.0) + 32.0);
}
int main()
{
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    //called function to convert celsius to fahrenheit
    f = toFarenheit(c);
    printf("%.2f Celsius = %.2f Fahrenheit", c, f);
    return 0;
}