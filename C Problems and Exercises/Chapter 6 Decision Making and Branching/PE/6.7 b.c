#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int i, j, n = 1;
    for(i = 1; i <= 5; i ++)
    {
        for(j = 1; j <= i; j++)
        {
            (i + j) % 2 == 0 ? printf("1"):printf("0");
        }
        printf("\n");
    }
    return 0;
}

