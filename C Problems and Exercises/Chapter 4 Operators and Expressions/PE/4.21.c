#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int a,b;
    double x;
    printf("Input value of A,B: ");
    scanf("%d %d", &a, &b);
    x = a/b;
    if(a > b)
        printf("Division is: %.2lf",x);
    else if(a=b)
        printf("Division is: 1");
    else
        printf("Division not possible");
    return 0;
}
