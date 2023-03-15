#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char first[20], mid[20], surnamme[20];
    int length1, length2, length3;
    printf("First Name: ");
    scanf("%s",&first);
    printf("Mid Name: ");
    scanf("%s",&mid);
    printf("Sur Name: ");
    scanf("%s",&surnamme);
    length1 = strlen(first);
    length2 = strlen(mid);
    length3 = strlen(surnamme);
    printf("\nfirstname length: %d\nmidname length: %d\nsurname length: %d\n ",length1,length2,length3);
}