#include<stdio.h>
void decimalToBinary(int decimal)
{
    if (decimal > 0)
    {
        decimalToBinary(decimal / 2);
        printf("%d", decimal % 2);
    }
}
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("Binary representation: ");
    decimalToBinary(decimal);
    printf("\n");

    return 0;
}

