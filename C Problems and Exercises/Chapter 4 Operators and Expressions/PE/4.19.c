#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int days, years, months;
    printf("\nInput days: ");
    scanf("%d", &days);
    years = days/365;
    days = days % 365;
    months = days/30;
    days = days%30;
    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Days: %d \n", days);
    return 0;
}
