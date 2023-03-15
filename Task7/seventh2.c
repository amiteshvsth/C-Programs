#include<stdio.h>
double power(double x, unsigned int n)
{
    if( n == 0)
        return 1;
    double retValue = 1;
    while(n)
    {
        if(n%2)
             retValue = retValue * x;
        x = x * x;
        n = n/2;
    }
   return retValue;
}
void main(){
    double a;
    printf("Enter X: ");
    scanf("%lf", &a);
    double result=power(a,2);
    printf("%.2lf",result);
}