#include<stdio.h>
#include<math.h>
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int hrs, mins, tot_mins;
    printf("Enter Hours and Minutes: ");
    scanf("%d %d", &hrs, &mins);
    tot_mins = mins + (hrs * 60);
    printf("Total Minutes: %d", tot_mins);
    return 0;
}
