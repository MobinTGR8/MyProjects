#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int x, y, z;
    printf("Enter three number: \n");
    scanf("%d %d %d", &x, &y, &z);

    ((x>y)&&(x>z))? printf("largest number is x: %d", x):

    ((y>x)&&(y>z))? printf("largest number is y: %d", y):

    printf("largest number is z: %d",z);
    return 0;
}
