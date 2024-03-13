#include <stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    float marks;

    printf("Enter the total percentage of marks: ");
    scanf("%f", &marks);

    if (marks >= 80.0)
    {
        printf("First Division");
    }
    else if (marks >= 60.0)
    {
        printf("Second Division");
    }
    else
    {
        printf("Third Division");
    }

    return 0;
}

