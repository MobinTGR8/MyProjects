#include <stdio.h>
#include <math.h>
int main()
{
    printf("ID:2102064\n\n");
    int i;
    printf("Number\tSquare\tSquare Root\n");
    for(i = 0; i <= 101; i += 10)
    {
        printf("%d\t%d\t%f\n", i, i*i, sqrt(i));
    }
    return 0;
}
