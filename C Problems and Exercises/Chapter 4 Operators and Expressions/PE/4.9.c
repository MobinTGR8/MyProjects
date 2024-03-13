#include<stdio.h>
#include<conio.h>
void main()
{
    printf("ID:2102064\n\n");
    int num, sum, sum1, sum2, sum3, sum4;
    sum1 = sum2 = sum3 = sum4 = 0;
    sum = 0;
    printf("Enter a four digit number: \n");
    scanf("%d", &num);
    sum1 = num%10;
    num = num/10;
    sum2 = num%10;
    num = num/10;
    sum3 = num%10;
    num = num/10;
    sum4 = num%10;
    num = num/10;
    sum = sum1 + sum2 + sum3 + sum4;
    printf("\nSum of digit: %d\n", sum);
    return 0;
}
