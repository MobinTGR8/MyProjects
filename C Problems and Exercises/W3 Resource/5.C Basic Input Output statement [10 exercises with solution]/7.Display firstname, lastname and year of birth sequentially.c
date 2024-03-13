#include <stdio.h>
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    char firstname[20], lastname[20];
    int bir_year;
    printf("Enter your firstname: ");
    scanf("%s", firstname);
    printf("Enter your lastname: ");
    scanf("%s", lastname);
    printf("Enter your year of birth: ");
    scanf("%d", &bir_year);
    printf("%s %s %d\n", firstname, lastname, bir_year);
    return 0;
}
