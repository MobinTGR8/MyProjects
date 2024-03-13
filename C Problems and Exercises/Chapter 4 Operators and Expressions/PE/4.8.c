#include<stdio.h>
#include<math.h>
int main()
{
    printf("ID:2102064\n\n");
    double l, r, c;
    double freq, tem1, tem2;
    printf("Enter Inductance, Resistance and Capacitance: \n");
    scanf("%lf %lf %lf", &l, &r, &c);
    tem1 = (1/(l * c));
    tem2 = ((r * r)/(4 * c * c));
    freq = sqrt(tem1 - tem2);
    printf("The frequency is: %lf", freq);
    return 0;
}
