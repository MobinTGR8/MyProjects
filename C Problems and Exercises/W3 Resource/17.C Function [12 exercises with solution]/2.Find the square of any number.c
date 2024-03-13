#include <stdio.h>
int square(int num)
{
    return num * num;
}
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = square(num);
    printf("Square of %d is: %d\n", num, result);

    return 0;
}

