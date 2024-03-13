#include<stdio.h>
#include<math.h>
int main()
{
    float h, w, P;
    printf("Enter Height and Weight of the Rectangle: ");
    scanf("%f %f", &h, &w);
    P = 2 * (h + w);
    printf("The Perimeter of the Rectangle is: %f", P);
    return 0;
}
