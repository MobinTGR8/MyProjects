#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    char name1[10], name2[10];
    int code1, code2;
    float price1, price2;

    printf("Enter Name, Code, and Price: ");
    scanf("%s %d %f", &name1, &code1, &price1);
    printf("Enter Name, Code, and Price: ");
    scanf("%s %d %f", &name2, &code2, &price2);

    printf(" Name  Code  Price\n");
    printf(" %-7s  %-8d  %8.2f\n", name1, code1, price1);
    printf(" %-7s  %-8d  %8.2f\n", name2, code2, price2);
}
