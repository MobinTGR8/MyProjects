#include <stdio.h>
void addNumbers(int *a, int *b, int *sum)
{
    *sum = *a + *b;
}

int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    addNumbers(&num1, &num2, &sum);

    printf("Sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}

