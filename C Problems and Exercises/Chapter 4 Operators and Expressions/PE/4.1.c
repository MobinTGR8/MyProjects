#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int a, e;
    float p;
    printf("Enter a float number: \n");
    scanf("%f", &p);
    a = (int) p;
    e = a % 10;
    printf("%d", e);
    return 0;
}
