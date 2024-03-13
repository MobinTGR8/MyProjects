#include <stdio.h>
void main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
   int i,j,rows;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   printf("*");
	printf("\n");
   }
}

