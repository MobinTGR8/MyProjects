#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(int i = 0; i < rows; i++)
    {
        int coefficient = 1;
        for (int j = 1; j <= rows-i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%4d", coefficient);
            coefficient = coefficient * (i-j) / (j+1);
        }
        printf("\n");
    }

    return 0;
}

