#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int x, y;
    printf("Enter the value of X: ");
    scanf("%d", &x);
    if(x > 0)
    {
        y = 1;
        printf("The value of x = %d and y = %d", x, y);
    }
    else
    {
        if(x == 0)
        {
            y = 0;
            printf("The value of x = %d and y = %d", x, y);
        }
        else
        {
            y = -1;
            printf("The value of x = %d and y = %d", x, y);
        }
        return 0;
    }
}

