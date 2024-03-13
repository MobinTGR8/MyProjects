#include <stdio.h>
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int num1, num2, add, sub, mult, mod;
    float div;

    printf("Enter Two Numbers: ");
    scanf("%d %d", &num1, &num2);

    add = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    mod = num1 % num2;

    printf("The Addition of the two numbers : %d\n", add);
    printf("The Subtraction of the two numbers : %d\n", sub);
    printf("The Multiplication of the two numbers : %d\n", mult);
    printf("The Division of the two numbers : %f\n", div);
    printf("The Quotient of the two numbers : %d\n", mod);

    return 0;
}

