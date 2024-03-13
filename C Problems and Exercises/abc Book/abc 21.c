#include<stdio.h>
#include<conio.h>
void main()
{
    printf("ID:2102064\n\n");
    int a=1, b=1, c=0, i;
    printf("%d\t %d\t", a, b);
    for (i = 0; i <= 10; i++)
    {
        c = a + b;
        if(c < 100)
        {
            printf("%d\t", c);
        }
        a = b;
        b = c;
    }
    getch();
}


