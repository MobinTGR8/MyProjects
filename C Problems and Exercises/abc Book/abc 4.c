#include<stdio.h>
#include<conio.h>
void main()
{
    printf("ID:2102064\n\n");
    float c,f;
    printf("Enter temp in centigrade: ");
    scanf("%f", &c);
    f = (1.8 * c) + 32;
    printf("Temp in Fahrenheit = %f", f);
}
