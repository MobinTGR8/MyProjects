#include<stdio.h>
#include<math.h>
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    float kmph, miph;
    printf("Enter value in km/h : ");
    scanf("%f", &kmph);
    miph = kmph * 0.6214;
    printf("The value in mi/h is: %f", miph);
    return 0;

}
