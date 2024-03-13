#include<stdio.h>
#include<conio.h>
void main()
{
    printf("ID:2102064\n\n");
    int x, y;
    printf("Read the integer from keyboard:- ");
    scanf("%d", &x);
    x <<= 3;
    y = x;
    printf("\nThe left shifted data is = %d", y);
    getch();
}
