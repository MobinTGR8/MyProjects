#include<stdio.h>
#include<Math.h>
int main()
{
    printf("ID:2102064\n\n");
    float dr, sc, hc, tbo, eoq;

    printf("\nEnter Demand Rate: ");
    scanf("%f", &dr);

    printf("\nEnter setup cost: ");
    scanf("%f", &sc);

    printf("\nEnter holding cost: ");
    scanf("%f", &hc);

    printf("\n");

    eoq = sqrt((2 * dr * sc)/hc);
    tbo = sqrt((2 * sc)/(dr * hc));
    printf("The Economic Order Quantity: %f\n", eoq);
    printf("The Time Between Order: %f\n", tbo);
    return 0;
}
