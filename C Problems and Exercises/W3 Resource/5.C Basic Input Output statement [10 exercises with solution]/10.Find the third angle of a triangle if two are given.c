#include<stdio.h>
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int ang1, ang2, ang3;
    printf("Enter Two Angles of a Triangle: ");
    scanf("%d %d", &ang1, &ang2);
    ang3 = 180 - (ang1 + ang2);
    printf("The Third Angle of the Triangle is: %d", ang3);
    return 0;
}
