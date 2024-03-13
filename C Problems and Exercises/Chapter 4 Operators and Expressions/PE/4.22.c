#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int a,b,c,d;
    float x,y,z;
    printf("Input the value of a,b,c,d:");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    x = (a+b)*(c/d);
    y = (a+b)*c/d;
    z = (b*c)/d;
    printf("\nX is:%f" ,x);
    printf("\nY is:%f" ,y);
    printf("\nZ is:%f" ,z);
    return 0;
}
