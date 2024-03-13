#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int a,b,c;
    float x;
    printf("\nInput value of A , B, C : ");
    scanf("%d %d %d", &a, &b, &c);
    x = a - b/3 + c * 2 - 1;
    printf("The value of x is: %0.2f", x);
    return 0;
}
