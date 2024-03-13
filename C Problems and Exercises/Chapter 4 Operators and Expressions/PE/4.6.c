#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int a, u, t;
    float dis;
    printf("Enter the value of a, u, t: \n");
    scanf("%d %d %d", &a, &u, &t);
    dis = u * t + (a * t * t)/2;
    printf("Distance is: %0.3f\n", dis);
    return 0;
}
