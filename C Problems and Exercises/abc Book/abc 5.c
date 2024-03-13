#include<stdio.h>
#include<conio.h>
void main()
{
    printf("ID:2102064\n\n");
    int s1, s2, s3, s4, s5, sum, total = 500;
    float per;
    printf("Enter marks of 5 subjects:\n ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
    sum = s1 + s2 + s3 + s4 + s5;
    printf("sum = %d\n", sum);
    per = (sum * 100)/total;
    printf("Percentage = %f\n", per);
}
