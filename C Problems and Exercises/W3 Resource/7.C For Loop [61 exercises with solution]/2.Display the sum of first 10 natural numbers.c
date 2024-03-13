#include <stdio.h>
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int  i, sum = 0;
    printf("First 10 natural numbers are: \n");
    for (i = 1; i <= 10; i++)
    {
        sum = sum + i;
        printf("%d ", i);
    }
    printf("\nThe Sum is : %d\n", sum);
}
