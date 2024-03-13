#include <stdio.h>
int countDigits(int n)
{
    if (n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int count = countDigits(num);
    printf("Number of digits: %d\n", count);

    return 0;
}

