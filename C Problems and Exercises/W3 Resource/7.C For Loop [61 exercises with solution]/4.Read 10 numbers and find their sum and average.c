#include<stdio.h>
void main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int i, n, sum = 0;
    float avg;
    printf("Input the 10 numbers: \n");
    for(i = 1; i <= 10; i++)
    {
        printf("Number-%d: ", i);
        scanf("%d", &n);
        sum += n;
    }
    avg = sum / 10.0;
    printf("The sum of 10 no is: %d\nThe average is: %f\n", sum, avg);
}
