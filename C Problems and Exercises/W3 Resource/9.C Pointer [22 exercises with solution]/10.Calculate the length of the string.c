#include <stdio.h>
int stringLength(char *str)
{
    int length = 0;
    while (*str != '\0')
    {
        length++;
        str++;
    }
    return length;
}
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int length = stringLength(str);
    printf("Length of the string: %d\n", length);

    return 0;
}

