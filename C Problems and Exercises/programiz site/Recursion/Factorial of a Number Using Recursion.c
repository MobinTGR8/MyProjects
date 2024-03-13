#include<stdio.h>
long int multiplyNumbers(int n);
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}
long int multiplyNumbers(int n)
{
    if(n >= 1)
        return n * multiplyNumbers(n-1);
    else
        return 1;
}
