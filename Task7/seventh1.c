#include<stdio.h>
double power(double x, unsigned int n)
{
    double product = 1;
    for(int i=0; i<n; i++)
    {
        product = product * x;
    }
    return product;
}
void main(){
    double a;
    printf("Enter X: ");
    scanf("%lf", &a);
    double result=power(a,2);
    printf("%.2lf",result);
}