#include<stdio.h>
#include<conio.h>
void main()
{
    printf("ID:2102064\n\n");
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    if(n%2 == 0)
    printf("This number is even");
    else
    printf("This number is odd");
    getch();
}
