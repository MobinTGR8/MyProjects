#include<stdio.h>
main()
{
    printf("ID:2102064\n\n");
    float x, y;
    double p, q;
    printf("Values of x and y: ");
    scanf("%f %e", &x, &y);
    printf("\n");
    printf("x = %f\n y = %f\n\n", x, y);
    printf("Values of p and q: ");
    scanf("%lf %lf", &p, &q);
    printf("\n\n p = .121%f\n p = %.12e", p, q);
}
