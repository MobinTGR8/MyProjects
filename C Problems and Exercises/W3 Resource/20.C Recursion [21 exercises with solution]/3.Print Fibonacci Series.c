#include <stdio.h>
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacciSeries(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
}
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    printFibonacciSeries(n);

    return 0;
}
