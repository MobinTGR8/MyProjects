#include<stdio.h>
#include<conio.h>
void main()
{
    printf("ID:2102064\n\n");
    int a, b, c;
    printf("Read the integers from keyboard:- ");
    scanf("%d %d", &a, &b);
    c = a&b;
    printf("\nThe Answer after ANDing is: %d", c);
    getch();
}
