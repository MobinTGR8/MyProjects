#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    printf("ID:2102064\n\n");
    int x, y, z;
    float a, b, c;
    printf("Enter three Value: \n");
    scanf("%f %f %f", &a, &b, &c);
    x = ceil(a);
    y = ceil(b);
    z = ceil(c);
    printf("Values are: %d %d %d", x, y, z);
    return 0;
}
