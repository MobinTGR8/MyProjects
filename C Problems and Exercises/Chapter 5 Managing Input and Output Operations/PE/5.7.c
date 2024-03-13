#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    double value = 10.45678;

    printf("Exponential format with two decimal places: %.2e\n", value);

    printf("Exponential format with four decimal places: %.4e\n", value);

    printf("Exponential format with eight decimal places: %.8e\n", value);

    return 0;
}

