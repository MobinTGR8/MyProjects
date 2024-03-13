#include<stdio.h>
#include<math.h>
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int tot_mins, mins, hrs;
    printf("Enter total minutes: ");
    scanf("%d", &tot_mins);
    hrs = tot_mins / 60;
    mins = tot_mins % 60;
    printf("%d Hours and %d Minutes", hrs, mins);
    return 0;
}
