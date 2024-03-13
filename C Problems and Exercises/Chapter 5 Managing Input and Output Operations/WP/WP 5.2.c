#include<stdio.h>
#include<ctype.h>
main()
{
    printf("ID:2102064\n\n");
    char character;
    printf("Press any key\n");
    character = getchar();
    if(isalpha(character) > 0)
        printf("The character is a letter.");
    else if(isdigit(character) > 0)
        printf("The character is a digit.");
    else
        printf("The character is not alphanumeric.");

}
