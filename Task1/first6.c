#include<stdio.h>
#include<conio.h>
int main(){
    int n=6,i,sum=0,avg=0;
    for ( i = 0; i <=n; i++)
    {
       sum=sum+i;
    }
    printf("sum: %d",sum);
    avg=sum/n;
    printf("\nAverage: %d",avg);
}