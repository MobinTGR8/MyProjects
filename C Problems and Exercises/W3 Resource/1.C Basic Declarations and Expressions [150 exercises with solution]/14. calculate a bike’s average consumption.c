#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int x;
    float y;
    printf("Input total distance in km: ");
    scanf("%d", &x);
    printf("Input total fuel spent in liters: ");
    scanf("%f", &y);
    printf("Average consumption (km/lt) %.3f", x/y);
    return 0;
}
