#include<stdio.h>
int isPerfect(int num)
{
    int sum = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        return 1; // Perfect number
    else
        return 0; // Not Perfect number
}
void printPerfectNumbers(int start, int end)
{
    printf("Perfect numbers between %d and %d: ", start, end);

    for (int i = start; i <= end; i++)
    {
        if (isPerfect(i))
            printf("%d ", i);
    }

    printf("\n");
}

int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int start, end;
    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);

    printPerfectNumbers(start, end);

    return 0;
}
