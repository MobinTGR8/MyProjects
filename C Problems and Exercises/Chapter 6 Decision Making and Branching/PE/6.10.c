#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int x1, x2, a, b, c, v, x;
    printf("Enter value of equation a, b, c\n");
    scanf("%d %d %d", &a, &b, &c);
    v = sqrt(b * b - (4 * a * c));
    x = (c / b);
    x1 = -b + (v  / (2 * a));
    x2 = -b - (v / (2 * a));
    if(a == 0 && b == 0)
    {
        printf("There are no roots for this equation\n");
    }
    else if(a == 0)
    {
        printf("There  are only one roots for the equation x = %d\n", x);
    }
    else if(v < 0)
    {
        printf("There are two unreal roots for equation x1 = %d\n x2 = %d", x1, x2);
    }
    else
    {
        printf("There are two real roots for this equation x1 = %d\n x2 = %d", x1, x2);
    }
    return 0;
}
