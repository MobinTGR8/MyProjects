#include<stdio.h>
#include<math.h>
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    float r, V;
    printf("Enter the radius of the Sphere: ");
    scanf("%f", &r);
    V = (4 * 3.14 * r * r * r)/3;
    printf("The volume of the Sphere is: %f", V);
    return 0;
}
