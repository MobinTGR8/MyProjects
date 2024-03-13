#include<stdio.h>
#include<conio.h>
void main()
{
    printf("ID:2102064\n\n");
    int *p1, *p2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &*p1, &*p2);
    sum = *p1 + *p2;
    printf("sum = %d", sum);
    getch();
}
