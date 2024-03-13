#include<stdio.h>
int  main()
{
    printf("ID:2102064\n\n");
    int  x, y;
    printf("Input the Coordinates(x,y): ");
    printf("\nx: ");
    scanf("%d", &x);
    printf("\ny: ");
    scanf("%d", &y);

    if(x > 0 && y > 0)
    {
        printf("\nQuadrant-I(+,+)\n");
    }
    else if(x < 0 && y > 0)
    {
        printf("\nQuadrant-II(-,+)\n");
    }
    else if(x < 0 && y < 0)
    {
        printf("\nQuadrant-III(-,-)\n");
    }
    else if(x > 0 && y < 0)
    {
        printf("\nQuadrant-IV(+,-)\n");
    }
    return 0;
}
