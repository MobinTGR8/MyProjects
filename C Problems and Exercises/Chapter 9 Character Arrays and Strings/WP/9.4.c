#include<stdio.h>
#include<string.h>
void main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    char str[30];
    int vow = 0, cons = 0, i = 0;
    printf("Enter a string: ");
    gets(str);
    while(str[i] != '\0')
    {
        if(str[i] == 'a' || str[i] == 'A' ||
           str[i] == 'e' || str[i] == 'E' ||
           str[i] == 'i' || str[i] == 'I' ||
           str[i] == 'o' || str[i] == 'O' ||
           str[i] == 'u' || str[i] == 'U')
            vow++;
        else
            cons++;
        i++;
    }
    printf("\nNumber of Vowels = %d", vow);
    printf("\nNumber of Consonants = %d", cons);
}
