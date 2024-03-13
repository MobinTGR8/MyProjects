#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int n, m, p, c, can[100], i, j;
    printf("Enter how many candidates\n");
    scanf("%d", &n);
    printf("Enter marks of all candidate math, physics and chemistry\n");
    for(i = 1; i <= n; i++)
    {
        scanf("%d %d %d", &m, &p, &c);
        if((m >= 60 && p >= 50 && c >= 40) && ((m + p+ c) >= 200 || (m + p) >= 150))
            printf("Candidate %d is eligible\n", c);
    }
}
