#include <stdio.h>
int findMax(int *a, int *b)
{
    if (*a > *b)
        return *a;
    else
        return *b;
}

int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int num1, num2;
    int *ptr1, *ptr2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    int max = findMax(ptr1, ptr2);

    printf("The maximum number is: %d\n", max);

    return 0;
}

