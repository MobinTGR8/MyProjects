#include<stdio.h>
#include<ctype.h>
main()
{
    printf("ID:2102064\n\n");
    char alphabet;
    printf("Enter an alphabet");
    putchar('\n');
    alphabet = getchar();
    if(islower(alphabet))
        putchar(toupper(alphabet));
    else
        putchar(tolower(alphabet));
}
