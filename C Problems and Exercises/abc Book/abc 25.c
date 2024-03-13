#include<stdio.h>
#include<conio.h>
void main()
{
    printf("ID:2102064\n\n");
    int n, i, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    for(i = 1; i < n; i = i+2)
    {
        printf("%d+", i);
        sum = sum + i;
    }
    printf("%d", n);
    printf("\nSum = %d", sum+n);
    getch();

}

