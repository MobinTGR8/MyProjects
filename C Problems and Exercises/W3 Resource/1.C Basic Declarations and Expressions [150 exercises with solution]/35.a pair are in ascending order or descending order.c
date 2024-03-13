#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int x, y,  i, total = 0;
    printf("\nInput the pair of numbers (for example 10,2 : 2,10) ");
    printf("\nInput first number of the pair: ");
    scanf("%d", &x);
    printf("\nInput second number of the pair: ");
    scanf("%d", &y);

    if (x > y)
    {
        printf("The pair is in descending order!");
    }
    else
    {
        printf("The pair is in ascending order!");
    }
    printf("\n");

}
