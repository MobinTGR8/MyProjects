#include<stdio.h>
#include<conio.h>
void main()
{
    printf("ID:2102064\n\n");
    int r;
    float pi = 3.14, area, ci;
    printf("Enter radius of circle: ");
    scanf("%d", &r);
    area = pi * r * r;
    printf("Area of circle = %f", area);
    ci = 2 * pi * r;
    printf("\nCircumference = %f", ci);
    getch();
}
