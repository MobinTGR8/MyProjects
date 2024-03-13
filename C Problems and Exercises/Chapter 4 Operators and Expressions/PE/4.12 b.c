#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int x, y, z;
    double avg;
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &x, &y, &z);
    avg=(x + y + z)/3;
    printf("Average is: %f", avg);
    return 0;
}
