#include<stdio.h>
int mul (int a, int b);
int main ()
{
    printf("ID:2102064\n\n");
    int a,b,c;
    a=5;
    b=10;
    c=mul(a,b);
    printf("multiplication of %d and %d is %d",a,b,c);

}
 int mul (int x, int y)
{
    int p;
    p=x*y;
    return (p);
}
