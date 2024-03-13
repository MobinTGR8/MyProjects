#include <stdio.h>
int calculateSum(int n)
{
    if (n == 0)
        return 0;
    return n + calculateSum(n - 1);
}
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int sum = calculateSum(n);
    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
