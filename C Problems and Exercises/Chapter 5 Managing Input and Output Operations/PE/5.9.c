#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    char first[10] = "ANIL", middle[10] = "KUMAR", last[10] = "GUPTA";

    printf("%s %c. %s\n", first, middle[0], last);

    printf("%c.%c. %s\n", first[0], middle[0], last);

    printf("%s %c.%c.\n", last, first[0], middle[0]);

    return 0;
}

