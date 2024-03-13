#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    printf("ID:2102064\n\n");
    float x, y, a, b, c;
    printf("Enter X: \n");
    scanf("%f", &x);
    printf("Enter Y: \n");
    scanf("%f", &y);

    a = ((x + y)/(x - y));
    b = (x + y)/2;
    c = (x + y) * (x - y);
    printf("%f %f %f", a, b, c);
    return 0;
}
