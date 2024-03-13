#include<stdio.h>
#include<ctype.h>
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    char str[100];
    int vowelCount = 0, consonantCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowelCount++;
            }
            else
            {
                consonantCount++;
            }
        }
    }

    printf("Vowels: %d\n", vowelCount);
    printf("Consonants: %d\n", consonantCount);

    return 0;
}

