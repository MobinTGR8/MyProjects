#include<stdio.h>
#include<conio.h>
void main()
{
    printf("ID:2102064\n\n");
    int a, b;
    printf("Enter value for a & b: ");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping the value of a & b: %d %d", a, b);
}
