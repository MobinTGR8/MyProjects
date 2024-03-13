#include<stdio.h>
void swap(int *, int *);
main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int x = 0;
    int y = 20;

    printf("\nValue of X and Y before swapping are X = %d and Y = %d", x, y);
    swap(&x, &y);
    printf("\n\nValue of X and Y after swapping are X = %d and Y = %d", x, y);

}
void swap(int *p, int *q)
{
    int r;
    r = *p;
    *p = *q;
    *q = r;
}
