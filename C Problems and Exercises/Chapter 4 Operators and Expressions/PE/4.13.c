#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    float cus1, cus2, bill1, bill2;
    printf("Enter number of call of cus1 and cus2: ");
    scanf("%f %f", &cus1, &cus2);
    if(cus1 <= 100)
    {
        bill1=250;
    }
    else
    {
        bill1=(250 + cus1 * 1.25);
    }
    if(cus2 <= 100)
    {
        bill2=250;
    }
    else
    {
        bill2 = 250 + cus1 * 1.25;
    }
    printf("Mobile bill of customer1: %f\n", bill1);
    printf("Mobile bill of customer2: %f\n", bill2);
    return 0;
}
