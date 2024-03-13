#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    float x, y, z, P, A;
    printf("\nInput the first number: ");
    scanf("%f", &x);
    printf("\nInput the second number: ");
    scanf("%f", &y);
    printf("\nInput the third number: ");
    scanf("%f", &z);

    if(x < (y+z) && y < (x+z) && z < (y+z))
    {
        P = x + y + z;
        printf("\nPerimeter = %.1f\n", P);
    }
    else
    {
        printf("Not possible to create a triangle...!");

    }
}

