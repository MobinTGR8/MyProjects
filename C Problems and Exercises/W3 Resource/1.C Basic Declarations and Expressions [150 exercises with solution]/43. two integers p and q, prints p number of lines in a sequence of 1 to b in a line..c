#include <stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int x, y, i, j, l;
	printf("Input number of lines: ");
	scanf("%d", &x);
	printf("Number of numbers in a line: ");
    scanf("%d", &y);
    for(i = 1, l=1; i <= x; i++)
	  {
		for(j = 1; j <= y; j++)
	 	{
		  printf("%d ",l);
		  l++;
        }
          printf("\n");
		}

  return 0;
}
