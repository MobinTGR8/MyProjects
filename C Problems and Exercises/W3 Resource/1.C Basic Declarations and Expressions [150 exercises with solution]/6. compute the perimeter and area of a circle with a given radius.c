#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int radius;
    float area, perimeter;
    radius=6;

    perimeter = 2*3.14*radius;
    printf("Perimeter of the Circle = %f inches\n",perimeter);

    area = 3.14*radius*radius;
    printf("Area of the Circle = %f square inches\n",area);

    return 0;

}
