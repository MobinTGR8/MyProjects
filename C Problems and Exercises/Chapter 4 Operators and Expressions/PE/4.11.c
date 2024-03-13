#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int m, n, x;
    printf("Enter the value of m and n: ");
    scanf("%d %d", &m, &n);
    x = m % n;
    if(x==0)
        printf("m is the multiple of n\n");
    else
        printf("m is not multiple of n\n");
    return 0;
}
