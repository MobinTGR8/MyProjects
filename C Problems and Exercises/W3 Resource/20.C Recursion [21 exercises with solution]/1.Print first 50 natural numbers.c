#include <stdio.h>
void printNumbers(int n)
{
    if (n > 0)
    {
        printNumbers(n - 1);
        printf("%d ", n);
    }
}
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int n = 50;
    printNumbers(n);
    printf("\n");

    return 0;
}

