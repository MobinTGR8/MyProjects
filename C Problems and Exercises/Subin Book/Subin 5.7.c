#include<stdio.h>
int main()
{
    float celsius, farenheit;
    printf("Enter the temperature in celsius: ");
    scanf("%f", &celsius);
    farenheit = 1.8 * celsius + 32;
    printf("Temperature in farenheit is: %.1f\n", farenheit);
    return 0;
}
