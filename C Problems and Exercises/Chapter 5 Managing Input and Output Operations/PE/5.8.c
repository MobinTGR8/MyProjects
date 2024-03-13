#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    double num = 345.6789;

    printf("Fixed-point format with 2 decimal places: %.2f\n", num);

    printf("Fixed-point format with 5 decimal places: %.5f\n", num);

    printf("Fixed-point format with 0 decimal places: %.0f\n", num);

    return 0;
}

