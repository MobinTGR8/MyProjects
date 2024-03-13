#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    char id[10];
    int hour;
    double value, salary;
    printf("Input the Employee ID(Max. 10 chars): ");
    scanf("%s", &id);
    printf("\nInput the working hours: ");
    scanf("%d", &hour);
    printf("\nSalary amount/hr: ");
    scanf("%lf", &value);
    salary = value * hour;
    printf("\nEmployees ID = %s\nSalary = US$ %.2lf\n", id, salary);
    return 0;


}
