#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int x, y;
    float div_result;
    printf("Input two numbers: ");
    printf("\nx: ");
    scanf("%d", &x);
    printf("\ny: ");
    scanf("%d", &y);

    if(y != 0)
    {
        div_result = x/y;
        printf("%.1f\n", div_result);
    }
    else
    {
        printf("Division not possible.\n");
    }
    return 0;
}
