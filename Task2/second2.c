#include <stdio.h>
int main()
{
    char str[30];
    int length;
    printf("Enter String: ");
    scanf("%s",&str);
    length= strlen(str);
    printf("length: %d",length);
}
