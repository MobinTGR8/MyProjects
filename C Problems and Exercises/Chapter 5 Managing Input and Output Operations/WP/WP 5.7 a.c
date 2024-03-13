#include<stdio.h>
main()
{
    printf("ID:2102064\n\n");
    char address[80];
    printf("Enter address\n");
    scanf("%[a-z]", address);
    printf("%-80s\n\n", address);
}
