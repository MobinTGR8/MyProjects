#include<stdio.h>
void main()
int sum(int num1, int num2);
{
    int sum;
    sum = num1 + num2;
    return (sum);
}
int sub (int num1, int num2)
{
    int sub
    sub = num1 - num2;
    return (sub);
}
int main()
{
    int num1 = 20, int num2 = 10, add, sub;
    add = sum(num1, num2);
    sub = sub(num1, num2);
    printf("sum and subtraction of two number, sum = %d\n\sub = %d",add,sub);
    return 0;
}
