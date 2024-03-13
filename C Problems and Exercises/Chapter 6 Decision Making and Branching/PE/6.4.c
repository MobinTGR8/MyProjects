#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int n, num[100], i, j, c;
    printf("Enter number of students\n");
    scanf("%d", &n);
    printf("Enter marks of all students\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for(j = 80; j >= 40; j = j - 20)
    {
        c = 0;
        for(i = 0; i < n; i++)
        {
            if(num[1] > j)
            {
                c++;
            }
        }
        printf("%d students got more than %d\n", c, j);
    }
    c = 0;
    for(i = 0; i < n; i++)
    {
        if(num[1] <= 40)
            c++;
    }
    printf("%d student got 0 to 40 marks\n", c);
}
