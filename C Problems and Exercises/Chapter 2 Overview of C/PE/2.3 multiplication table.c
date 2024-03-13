#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
     int num, i;

     printf("Enter a number: ");
     scanf("%d",&num);

     for(i=1;i<=10;i++)
     {
         printf(" %d * %d = %d\n", num, i, num*i);
     }

     return 0;
}
