#include<stdio.h>
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int count, n;
    float x, y;
    printf("Enter the values of x and n: ");
    scanf("%f %d", &x, &n);
    y =  1.0;
    count =  1;
    while(count <= n)
    {
        y =  y * x;
        count++;
    }
    printf("\nx = %f; n = %d; x to power n = %f\n", x, n, y);
}
