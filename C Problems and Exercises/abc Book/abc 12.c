#include<stdio.h>
#include<conio.h>
void main()
{
    printf("ID:2102064\n\n");
    int n;
    printf("Enter any year: ");
    scanf("%d", &n);
    if(n%4 == 0)
    printf("Year is a leap year");
    else
    printf("Year is not a leap year");
    getch();
}
