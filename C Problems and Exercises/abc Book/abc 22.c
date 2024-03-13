#include<stdio.h>
#include<conio.h>
void main()
{
    printf("ID:2102064\n\n");
    int n, i, fact = 1;
    printf("Enter any number: ");
    scanf("%d", &n);
    for(i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("Factorial = %d", fact);
    getch();
}
