#include <stdio.h>
#include <time.h>

void main(void)
{
    printf("ID:2102064\n\n");
    // Get the current time
    time_t current_time = time(NULL);

    // Convert the time to a string using the desired format
    char date_string[20];
    strftime(date_string, 20, "%Y-%m-%d", localtime(&current_time));

    // Print the date string
    printf("The current date is: %s\n", date_string);
}
