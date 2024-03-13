#include<stdio.h>
#define MAX_LENGTH 100
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    char str[MAX_LENGTH];

    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);

    int wordCount = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
        {
            wordCount++;
            while(str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i] != '\0')
            {
                i++;
            }
        }
    }

    printf("Total number of words: %d\n", wordCount);

    return 0;
}

