#include <stdio.h>
#include <math.h>
#define PI 3.1415
int main()
{
    printf("ID:2102064\n\n");
    int angle;
    double radians, sin_val, cos_val;

    printf("Angle\tSin\tCos\n");

    for(angle = 0; angle <= 180; angle += 15)
    {
        radians = angle * PI / 180.0;
        sin_val = sin(radians);
        cos_val = cos(radians);
        printf("%d\t %.2f\t %.2f\n", angle, sin_val, cos_val);
    }

    return 0;
}

