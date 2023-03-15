#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char str[20];
    printf("Enter String: ");
    scanf("%s",&str);
    printf("Reverse String: %s",strrev(str));
}