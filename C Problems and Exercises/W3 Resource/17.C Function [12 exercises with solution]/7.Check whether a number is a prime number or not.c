#include<stdio.h>
int isPrime(int num)
{
    if (num <= 1)
        return 0; // Not prime

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0; // Not prime
    }

return 1; // Prime
}
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

