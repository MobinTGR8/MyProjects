#include<stdio.h>
void main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int i, ctr;
    printf("Input number of terms: ");
    scanf("%d", &ctr);
    for(i = 1; i <= ctr; i++)
    {
        printf("Number is: %d and cube of the %d is: %d\n",i, i, (i * i* i));

    }

}
