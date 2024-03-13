#include<stdio.h>
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    float C, F;
    printf("Enter temperature in Centigrade: ");
    scanf("%f", &C);
    F = (9 * C + (32 * 5))/5;
    printf("Temperature in Fahrenheit is: %f", F);
    return 0;
}
