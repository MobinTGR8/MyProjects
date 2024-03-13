#include<stdio.h>
#include<math.h>
int main()
{
    printf("ID:2102064\n\n");
    char str1[10] = "WORD";
    char str2[10] = "PROCESSING";

    printf("%s ", str1);
    printf("%.10s\n", str2);
    printf("\n%s\n", str1);
    printf("%.10s\n", str2);
    printf("\n%.1s.", str1);
    printf("%.1s.", str2);
    return 0;
}
