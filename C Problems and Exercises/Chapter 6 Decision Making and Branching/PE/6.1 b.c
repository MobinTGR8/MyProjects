#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int x;
    printf("Enter an integer number: ");
    scanf("%d", &x);
    if(x % 2 == 0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }
    return 0;
}

