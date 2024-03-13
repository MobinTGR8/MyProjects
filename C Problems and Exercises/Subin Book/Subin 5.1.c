#include<stdio.h>
int main()
{
    float x, y, sumxy, detxy;
    printf("Enter the value of x + y: ");
    scanf("%f", &sumxy);
    printf("Enter the value of x - y: ");
    scanf("%f", &detxy);
    x = (sumxy + detxy)/2;
    y = (sumxy - detxy)/2;
    printf("x = %.2f, y = %.2f\n", x, y);
    return 0;
}
