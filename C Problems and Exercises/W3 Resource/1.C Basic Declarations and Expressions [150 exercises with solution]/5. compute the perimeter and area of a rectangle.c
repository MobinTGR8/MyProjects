#include<stdio.h>
/*--------Height and Width of a rectangle in inches-------*/
int width;
int height;
int area;
int perimeter;

int main()
{
    printf("ID:2102064\n\n");
    height=7;
    width=5;

    perimeter = 2*(height+width);
    printf("Perimeter of the rectangle = %d inches\n",perimeter);

    area = height*width;
    printf("Area of the rectangle = %d square inches\n",area);

    return 0;

}
