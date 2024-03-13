#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int pass, x = 10;

    while(x != 0)
    {
        printf("\nInput the Password: ");
        scanf("%d", &pass);

    if(pass == 1234)
    {
        printf("Correct Password");
        x = 0;
    }
    else
    {
        printf("Wrong Password, Try again");
    }
    printf("\n");
    }
    return 0;
}
