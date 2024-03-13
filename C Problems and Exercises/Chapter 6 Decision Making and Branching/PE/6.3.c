#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int a, b, c, d, n, m, dr, x1, x2;
    printf("Enter the value of a , b , c , d , m, n : ");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &m, &n);
    dr = (a * d - c * b);
    if(dr != 0)
    {
        x1 = (m * d - b * n)/ dr;
        x2 = (n * a - m * c)/dr;
        printf("\nThe value of x1 = %f\nThe value of x2 = %f", x1, x2);
    }
    else
    printf("The division is not possible");
    return 0;
}
