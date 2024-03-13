#include<stdio.h>
#include<math.h>
int main()
{
    printf("ID:2102064\n\n");
    int X1 = 0, X2 = 0, Y1 = 4, Y2 = 5;
    double D, d, red, area, peri, PI = 3.14159;
    d = (X2-X1) * (X2-X1) + (Y2-Y1) * (Y2-Y1);
    D = sqrt (d);
    red = D/2;
    peri = 2 * PI * red;
    area = PI * red * red;
    printf("area is %.2lf\nPerimeter is %.2lf\n", area, peri);
    return 0;
}
