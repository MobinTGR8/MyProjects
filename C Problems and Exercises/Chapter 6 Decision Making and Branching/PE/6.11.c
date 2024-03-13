#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int a, b, c, max, min, total, mid, sum;
    printf("Enter value of three side\n");
    scanf("%d %d %d", &a, &b, &c);
    total = a + b + c;
    max = a;
    if(b > max)
        max = b;
    if(c > max)
        max = c;
    min = a;
    if(b < min)
        min = b;
    if(c < min)
        min = c;
    mid = total - (max + min);
    max = max * max;
    min = min * min;
    mid = mid * mid;
    sum = mid + mid;
    if(sum == max)
        printf("They are side of triangle\n");
    else
        printf("They are not side of triangle\n");
}
