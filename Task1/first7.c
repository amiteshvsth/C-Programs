#include <stdio.h>
#include <conio.h>
int main()
{
    int n,num, i, sum = 0, avg = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d",&num);
        sum = sum + i;
    }
    printf("sum: %d", sum);
    avg = sum / n;
    printf("\nAverage: %d", avg);
    printf("\nNumber: %d", n);
}