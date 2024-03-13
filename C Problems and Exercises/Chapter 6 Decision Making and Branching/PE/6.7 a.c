#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int i, j, n = 1;
    for(i = 1;  i <= 13; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", n);
            n++;
        }
        printf("\n");
    }
    return 0;
}
