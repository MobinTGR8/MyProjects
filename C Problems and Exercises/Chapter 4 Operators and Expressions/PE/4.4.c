#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int years;
    float s,d,p;
    printf("Enter the value of years: \n");
    scanf("%d %f %f", &years, &d, &p);
    s = p - (years * d);
    printf("Salvage value is: %0.3f\n", s);
    return 0;
}

