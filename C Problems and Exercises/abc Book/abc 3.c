#include<stdio.h>
#include<conio.h>
void main()
{
    printf("ID:2102064\n\n");
    int p, r, t, si;
    printf("Enter principle, rate of interest & time to find simple interest: ");
    scanf("%d %d %d", &p, &r, &t);
    si = (p * r * t)/100;
    printf("simple interest = %d", si);


}
