#include<stdio.h>
main()
{
    printf("ID:2102064\n\n");
    int a;
    float b;
    char c;
    printf("Enter value of a, b, and c\n");
    if(scanf("%d %f %c", &a, &b, &c) == 3)
        printf("a = %d b = %f c = %c\n", a, b, c);
    else
        printf("Error in input.\n");
}
