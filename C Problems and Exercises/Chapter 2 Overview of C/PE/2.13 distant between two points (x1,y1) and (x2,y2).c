#include<stdio.h>
#include<math.h>
int main()
{
    printf("ID:2102064\n\n");
    int X1, Y1, X2, Y2;
    float D;
    printf("Input value: ",X1,Y1,X2,Y2);
    scanf("%d%d%d%d", &X1,&Y1,&X2,&Y2);
    D = sqrt ((X2-X1) * (X2-X1) + (Y2-Y1) * (Y2-Y1));
    printf("%2f", D);
    return 0;
}
