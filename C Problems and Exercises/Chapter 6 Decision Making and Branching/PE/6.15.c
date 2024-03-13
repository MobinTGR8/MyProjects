#include<stdio.h>
#include<math.h>
int main()
{
    printf("ID:2102064\n\n");
    double x, temp, sum = 0;
    char S,s,t,T,C,c;
    printf("Enter S or s for sin(x)\nEnter T or t for tan(x)\nEnter C or c for cos(x)\n");
    scanf("%c", &T);
    printf("Enter angle\n");
    scanf("%lf", &x);
    temp = x;
    x = (x * 3.14159)/180;
    if(T == 's' || T == 'S')
    {
        x = sin(x);
        printf("sin %.2lf = %.3lf\n", temp,x);
    }
    else if(T == 'c' || T == 'C')
    {
        x = cos(x);
        printf("cos %.2lf = %.3lf\n", temp, x);
    }
    else
    {
        x = tan(x);
        printf("tan %.2lf = %.3lf\n", temp, x);
    }
    return 0;
}
