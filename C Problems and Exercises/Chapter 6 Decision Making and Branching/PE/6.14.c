#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int i, j, prime = 0;
    for(i = 100; i <= 200; i++)
    {
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
                break;
        }
        if(i == j)

            prime++;
        }

        printf("There are %d prime numbers between 100 and 200", prime);
    }


