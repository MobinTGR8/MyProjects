#include <stdio.h>
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}

