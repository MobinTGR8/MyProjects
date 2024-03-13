#include<stdio.h>
#include<math.h>
void main()
{
    printf("ID:2102064\n\n");
    float a, b, c, A, s;
    printf("Enter value of a,b,c\n");
    scanf("%f,%f,%f, &a,&b,&c");
    s = (a+b+c)/2;
    A = sqrt(s * (s-a) * (s-b) * (s-c));
    printf("Area of triangle is %f", A);
    return 0;

}
