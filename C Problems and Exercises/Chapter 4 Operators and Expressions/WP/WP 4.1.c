#include<stdio.h>
main()
{
    printf("ID:2102064\n\n");
    int months, days;
    printf("Enter days\n");
    scanf("%d", &days);
    months = days / 30;
    days = days % 30;
    printf("Months = %d Days = %d", months, days);
}
