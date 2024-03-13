#include<stdio.h>
void reverseSentence();
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}
void reverseSentence()
{
    char c;
    scanf("%c", &c);
    if(c != '\n')
    {
        reverseSentence();
        printf("%c", c);
    }
}

