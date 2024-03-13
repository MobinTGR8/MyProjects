#include<stdio.h>
void main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int num1 = 0, num2 = 1, n, i, fib;
    printf("\n\nEnter the value of n: ");
    scanf("%d", &n);
    for(i = 1; i <= n-2; i++)
    {
        fib = num1 + num2;
        num1 = num2;
        num2 = fib;
    }
    printf("\nnth fibonacci number (for n = %d) = %d", n, fib);
}
