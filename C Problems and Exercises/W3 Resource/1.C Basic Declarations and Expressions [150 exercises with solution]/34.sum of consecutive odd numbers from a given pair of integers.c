#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int x, y, i, total = 0;
    printf("\nInput a pair of numbers(For Example 10,2): ");
    printf("\nInput the first number of the pair: ");
    scanf("%d", &x);
    printf("\nInput the Second number of the pair: ");
    scanf("%d", &y);
    if (x < y)
    {
        return 0;
    }
    printf("\nList of odd numbers: ");
    for(i = y; i <= x; i++)
    {
        if((i%2) != 0)
        {
            printf("%d\n", i);
            total += i;
        }
    }
    printf("Sum=%d\n", total);
    return 0;
}
