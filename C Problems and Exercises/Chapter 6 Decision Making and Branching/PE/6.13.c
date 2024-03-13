#include<stdio.h>
void main()
{
    printf("ID:2102064\n\n");
    int i, sum = 0;
    for(i = 0; i <= 100; i++)
    {
        if(i%6 == 0 && i%4 != 0)
        {
            sum = sum + i;
            printf("%d ", i);
        }

    }
    printf("\nSum of those numbers is %d \n", sum);
}
