#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Output using three printf statements: \n");
    printf("%d ", a);
    printf("%d ", b);
    printf("%d\n", c);

    printf("Output using one printf statement with conversion specifiers: \n");
    printf("%d %d %d\n", a, b, c);

    printf("Output using one printf statement without conversion specifiers: \n");
    printf("%d %d %d\n", a, b, c);

    return 0;
}

