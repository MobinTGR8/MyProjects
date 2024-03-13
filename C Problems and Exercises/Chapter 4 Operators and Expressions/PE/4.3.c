#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int a, b, c, d, e, x;
    float p;
    printf("Enter the number: \n");
    scanf("%f", &p);
    a = (int) p;
    printf("The digits are \n ");
     e = a % 10000;
     b = e % 1000;
     c = b % 100;
     d = c % 10;
     if(a > 10000)
        printf("%d\n %d\n %d\n %d\n", a, e, b, c, x);
     else if(a > 1000)
        printf("%d\n %d\n %d\n", a, b, c, x);
     else if(a > 100)
        printf("%d\n %d\n %d\n", a, c, x);
     else if(a > 10)
        printf("%d\n %d\n", a, x);
        printf(" %d\n", a % 10);

}
