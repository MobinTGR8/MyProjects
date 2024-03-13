#include<stdio.h>
#include<math.h>
int main()
{
    printf("ID:2102064\n\n");
    int X1 = 2, X2 = 2, Y1 = 5, Y2 = 6;
    double D, d, red, area, peri, PI = 3.1416;
    d = (X2-X1) * (X2-X1) + (Y2-Y1) * (Y2-Y1);
    D = sqrt (d);
    red = D/2;
    peri = 2 * PI * red;
    area = PI * red * red;
    printf("area is %.2lf\n", area);
    return 0;
}

