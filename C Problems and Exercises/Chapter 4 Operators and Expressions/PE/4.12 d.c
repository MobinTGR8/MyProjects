#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    if(x<y)
    {
        if(x>z)
        {
            printf("smallest of three is %d", z);
        }
        else
        {
            printf("smallest of three is %d", x);
        }
    }
    else
    {
        printf("smallest of three is %d", y);
    }
    return 0;
}
