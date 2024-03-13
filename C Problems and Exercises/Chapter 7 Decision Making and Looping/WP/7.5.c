#include<stdio.h>
void main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int prime(int);
    int n, i;
    int temp;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Prime numbers between 1 and %d are: \n", n);
    for(i = 2; i <= n; i++)
    {
        temp = prime(i);
        if(temp == -99)
            continue;
        else
            printf("%d\t", i);
    }
}
int prime(int num)
{
    int j;
    for(j = 2; j < num; j++)
        if(num % j == 0)
        return(-99);
    if(j == num)
        return(num);
}
