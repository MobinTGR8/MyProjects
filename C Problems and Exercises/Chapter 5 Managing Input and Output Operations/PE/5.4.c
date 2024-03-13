#include<stdio.h>
#include<math.h>
int main()
{
    printf("ID:2102064\n\n");
    float values[4];

    for(int i = 0; i < 4; i++)
    {
        printf("Enter value %d: ", i+1);
        scanf("%f", &values[i]);
        values[i] = round(values[i]);
    }

    printf("\nBar Chart:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d: ", i+1);
        for (int j = 0; j < values[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
