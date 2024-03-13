#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    double w1, w2, n1, n2, result;
    printf("Weight - Item1: ");
    scanf("%lf", &w1);
    printf("No. of Item1: ");
    scanf("%lf", &n1);
    printf("Weight - Item2: ");
    scanf("%lf", &w2);
    printf("No. of Item2: ");
    scanf("%lf", &n2);
    result = ((w1 * n1) + (w2 * n2))/(n1 + n2);
    printf("Average Value = %f\n", result);
    return 0;

}
