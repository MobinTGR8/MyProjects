#include<stdio.h>
#include<math.h>
int main()
{
    printf("ID:2102064\n\n");
    float principal, rate, time, ci;

    printf("Enter the investment amount: ");
    scanf("%f", &principal);

    rate = 0.0875;
    time = 10;

    ci = principal * pow (1 + rate, time);

    printf("After %.0f years, the fixed deposit cumulative return on %.2f investment amount at a rate of %.2f%% is %.2f\n", time, principal, rate*100, ci);

    return 0;
}

