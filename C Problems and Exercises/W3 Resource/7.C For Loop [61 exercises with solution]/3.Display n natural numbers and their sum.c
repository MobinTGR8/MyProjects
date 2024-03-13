#include <stdio.h>
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int  i, n, sum = 0;
    printf("Input the Value of terms : ");
    scanf("%d", &n);
    printf("The first %d natural numbers are: \n", n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
        sum = sum + i;
    }
    printf("\nThe Sum of natural numbers upto %d terms : %d \n", n, sum);
}

