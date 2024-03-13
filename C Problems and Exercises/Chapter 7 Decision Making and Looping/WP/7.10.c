#include<math.h>
main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int count, negative;
    double number, sqroot;
    printf("Enter 9999 to stop\n");
    count = 0;
    negative = 0;
    while(count <= 100)
    {
        printf("Enter a number: ");
        scanf("%lf", &number);
        if(number == 9999)
            break;
        if(number < 0)
        {
            printf("Number is negative\n\n");
            negative++;
            continue;
        }
        sqroot = sqrt(number);
        printf("Number = %lf\n square root = %lf\n\n", number, sqroot);
        count++;
    }
    printf("Number of items done = %d\n", count);
    printf("\n\nNegative items = %d\n", negative);
    printf("END OF DATA\n");
}
