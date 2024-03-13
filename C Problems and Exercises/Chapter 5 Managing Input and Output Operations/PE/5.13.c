#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    float dollars, euros, inr;
    float usd_to_eur_rate = 0.84;
    float usd_to_inr_rate = 74.83;

    printf("Enter the amount in dollars: ");
    scanf("%f", &dollars);

    euros = dollars * usd_to_eur_rate;
    inr = dollars * usd_to_inr_rate;

    printf("%.2f dollars is equivalent to %.2f euros and %.2f INR\n", dollars, euros, inr);

    return 0;
}

