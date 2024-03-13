#include<stdio.h>
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for(i = 1; i <= rows; i++, k = 0)
   {
       for(space = 1; space <= rows - i; ++space)
       {
           printf("  ");
       }
   while(k != 2 * i -1)
   {
       printf("* ");
       ++k;
   }
   printf("\n");
   }
   return 0;
}


