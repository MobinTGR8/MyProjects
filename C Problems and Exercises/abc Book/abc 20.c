#include<stdio.h>
#include<conio.h>
void main()
{
    printf("ID:2102064\n\n");
    int i, j, k;
    for(i = 1; i <= 3; i++)

    {
       for(j = 3; j >= i; j--)
        printf(" ");
    {
        for(k = 1; k <= i * 2-1; k++)
        printf("*");
    }
        printf("\n");

    }
    getch();
}


