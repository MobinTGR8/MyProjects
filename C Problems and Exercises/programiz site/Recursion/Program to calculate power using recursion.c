#include<stdio.h>
int power(int n1, int n2);
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int base, a, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d ^ %d = %d", base, a, result);
    return 0;
}
int power(int base, int a)
{
    if(a != 0)
        return(base * power(base, a-1));
    else
        return 1;
}
