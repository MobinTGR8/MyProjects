#include <stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int day_num;
    printf("Enter a number for the day of the week (1-7, starting with Monday as 1): ");
    scanf("%d", &day_num);

    switch (day_num)
    {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 7.\n");
            break;
    }

    return 0;
}