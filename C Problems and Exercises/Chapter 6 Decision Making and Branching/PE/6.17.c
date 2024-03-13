#include <stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int a, b;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    if (a > b)
    {
    printf("%d is greater than %d", a, b);
    }
    else if (b > a)
    {
    printf("%d is greater than %d", b, a);
    }
    else
    {
    printf("Both numbers are equal");
    }

    return 0;
}

