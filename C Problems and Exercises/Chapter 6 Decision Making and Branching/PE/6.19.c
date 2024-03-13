#include <stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    char str[100];
    int i, capital_count = 0, small_count = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            capital_count++;
        else if(str[i] >= 'a' && str[i] <= 'z')
            small_count++;
    }

    printf("Number of capital letters: %d\n", capital_count);
    printf("Number of small letters: %d\n", small_count);

    return 0;
}

