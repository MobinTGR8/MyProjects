#include<stdio.h>
#include<string.h>
void main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    char chk = 't', str[30];
    int len, left, right;
    printf("\nEnter a string: ");
    scanf("%s", str);
    len = strlen(str);
    left = 0;
    right = len - 1;
    while(left < right && chk == 't')
    {
        if(!(str[left] == str[right]))
            chk = 'f';
        left++;
        right++;
    }
    if(chk == 't')
        printf("\nThe string %s is a palindrome", str);
    else
        printf("\nThe string %s is not a palindrome", str);
}