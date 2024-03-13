#include<stdio.h>
#include<conio.h>
int main()
{
    int n, i;
    printf("Enter any number: ");
    scanf("%d", &n);
    for(i = 1; i <= 10; i++);
    {
        printf("The table of that number is: %d * %d = %d", n, i, n * i);
    }
    return 0;

}
