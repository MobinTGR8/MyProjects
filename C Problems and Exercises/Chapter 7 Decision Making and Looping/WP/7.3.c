#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    long int p;
    int n;
    double q;
    printf("________________________________________________\n");
    printf(" 2 to power n        n         2 to power -n\n");
    printf("________________________________________________\n");
    p = 1;
    for(n = 0; n < 21; n++)
    {
        if(n == 0)
            p = 1;
        else
            p = p * 2;
        q = 1.0/(double)p;
        printf("%10ld %10d %20.12lf\n", p, n, q);
    }
    printf("___________________________________________\n");
    }
