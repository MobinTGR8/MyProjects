#include<stdio.h>
int sum(int n);
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int number, result;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);

    printf("sum = %d", result);
    return 0;
}
int sum(int n)
{
    if(n != 0)
        return n + sum(n-1);
    else
        return n;
}
