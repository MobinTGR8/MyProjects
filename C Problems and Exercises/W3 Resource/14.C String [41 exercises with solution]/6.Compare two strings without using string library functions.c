#include<stdio.h>
int compareStrings(char str1[], char str2[])
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int i = 0;
    while (str1[i] && str2[i] && str1[i] == str2[i]) {
        i++;
    }
    return(str1[i] == '\0' && str2[i] == '\0');
}

int main()
{
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    int result = compareStrings(str1, str2);
    printf("Strings are %s.\n", result ? "equal" : "not equal");
    return 0;
}

