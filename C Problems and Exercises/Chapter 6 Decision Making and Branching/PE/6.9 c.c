#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int y;
    float x;
    printf("Enter the value of X: ");
    scanf("%f", &x);
    (x > 0) ? (y = 1) : (x == 0) ? (y = 0) : (y = -1);
    printf("The value of y = %d\n", y);
    return 0;
}
