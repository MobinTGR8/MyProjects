#include<stdio.h>
#include<conio.h>
void main()
{
    printf("ID:2102064\n\n");
    int a, b, n, s, m, su, d;
    printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);
    printf("Enter:\n1 for sum\n2 for multiply\n3 for subtraction\n4 for division:\n ");
    scanf("%d", &n);
    switch(n)
   {
   case 1:
    s = a + b;
    printf("sum = %d", s);
    break;
   case 2:
    m = a * b;
    printf("multiply = %d", m);
    break;
   case 3:
    su = a - b;
    printf("subtraction = %d", su);
    break;
   case 4:
    d = a / b;
    printf("division = %d", d);
    break;
   default:
    printf("Wrong input");
    break;
}
    getch();

}

