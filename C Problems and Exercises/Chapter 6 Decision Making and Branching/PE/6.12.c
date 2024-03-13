#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    double n, total, extra;
    char name[100];
    printf("Enter your name:\n");
    scanf("%s", &name);
    printf("Enter your uses unit\n", name);
    scanf("%f", &n);
    if(n <= 200)
    {
        total =  (n * 80) + 100;
    }
    else if(n > 200 && n <= 300)
    {
        total = (n * 90) + 100;
    }
    else(total > 400);
    {
        extra = total * 0.15;
        total = total + extra;
    }
    printf("%s is your bill is %.2lf taka only", name, total);
    return 0;
}
