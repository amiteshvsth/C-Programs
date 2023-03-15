#include <stdio.h>
int main()
{
    char firstname[20], middlename[20], surname[20];
    printf("Firstname: ");
    scanf("%s",&firstname);
    printf("Middlename: ");
    scanf("%s",&middlename);
    printf("Surname: ");
    scanf("%s",&surname);

    printf("\na.%s %s %s", firstname,middlename,surname);
    printf("\n\nb. %s %s %s", surname, firstname, middlename);
}
