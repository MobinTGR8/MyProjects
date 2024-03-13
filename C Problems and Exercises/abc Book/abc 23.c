#include<stdio.h>
#include<conio.h>
void main()
{
    printf("ID:2102064\n\n");
    int i, n, r = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i++)
    {
        if(n%i == 0)
            r = 1;
        break;
    }
    if(r == 0)
        printf("Prime number");
    else
        printf("Not prime");
    getch();
}
