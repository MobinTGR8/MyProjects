#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    float s, vi, a, t;
    printf("Enter initial velocity of car = ");
    scanf("%f", &vi);
    printf("Enter acceleration = ");
    scanf("%f", &a);
    printf("Enter time = ");
    scanf("%f", &t);
    s = vi * t + 1.0/2.0 *a * t * t;
    printf("Distance covered by car is = %f m", s);
    return 0;
}
