#include<stdio.h>
void main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int i, n, sum = 0;
    printf("Input number of terms: ");
    scanf("%d", &n);
    printf("\nThe odd numbers are: ");
    for(i = 1; i <= n; i++)
    {
        printf("%d ", 2 * i - 1);
        sum += 2 * i -1;
    }
    printf("\nThe sum of odd Natural Number upto %d terms: %d\n", n, sum);

}
