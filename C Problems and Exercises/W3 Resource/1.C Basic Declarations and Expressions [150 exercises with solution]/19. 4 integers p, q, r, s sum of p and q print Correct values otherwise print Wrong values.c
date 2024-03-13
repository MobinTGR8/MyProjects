#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int p, q, r, s;

    printf("\nInput the first integer: ");
    scanf("%d", &p);
    printf("\nInput the second integer: ");
    scanf("%d", &q);
    printf("\nInput the third integer: ");
    scanf("%d", &r);
    printf("\nInput the fourth integer: ");
    scanf("%d", &s);

    if((q > r) && (s > p) && ((r + s) > (p + q)) && (r > 0) && (s > 0) && (p%2 == 0))
    {
        printf("\nCorrect Values\n");
    }
    else
    {
        printf("\nWrong Values\n");
    }
    return 0;
}
