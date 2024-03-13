#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int num1, num2;
    printf("Enter the first two-digit integer: ");
    scanf("%d", &num1);
    printf("Enter the second two-digit integer: ");
    scanf("%d", &num2);

    int product = num1 * num2;
    int tens1 = num1 / 10;
    int ones1 = num1 % 10;
    int tens2 = num2 / 10;
    int ones2 = num2 % 10;
    int result1 = ones2 * num1;
    int result2 = tens2 * num1 * 10;
    int result3 = ones1 * num2 * 10;
    int result4 = tens1 * num2 * 100;

    printf("Multiplication Process:\n");
    printf("          %d%d\n", tens1, ones1);
    printf("        x %d%d\n", tens2, ones2);
    printf("        -----\n");
    printf("         %3d\n", result1);
    printf("       +%3d\n", result2);
    printf("      +%3d\n", result3);
    printf("     +%4d\n", result4);
    printf("     ------\n");
    printf("     %4d\n", product);

    return 0;
}
