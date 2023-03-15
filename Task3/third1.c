#include<stdio.h>
void main(){
    int n;
    float f, c;
    printf("Enter n");
    scanf("%d",n);
    printf("Enter Fahrenheit values: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%f",&f);
    }
    
    c=(f-32)*(5.0/9.0);
    printf("Celsius is: %f",c);
}