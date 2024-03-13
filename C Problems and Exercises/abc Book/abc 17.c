#include<stdio.h>
#include<conio.h>
int main()
{
    printf("ID:2102064\n\n");
    int i, sum = 0;

    for(i = 1; i <= 10; i++)
    {
        printf("%d no. is = %d\n", i,i);
        sum = sum + i;
    }
    printf("sum = %d", sum);
    getch();
}
