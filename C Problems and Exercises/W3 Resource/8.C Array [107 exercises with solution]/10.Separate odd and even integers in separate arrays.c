#include<stdio.h>
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int n, i, j, evenCount = 0, oddCount = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], evenArr[n], oddArr[n];
    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Separate odd and even integers
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            evenArr[evenCount++] = arr[i];
        }
        else
        {
            oddArr[oddCount++] = arr[i];
        }
    }

    printf("Even integers: ");
    for(i = 0; i < evenCount; i++)
    {
        printf("%d ", evenArr[i]);
    }

    printf("\nOdd integers: ");
    for(i = 0; i < oddCount; i++)
    {
        printf("%d ", oddArr[i]);
    }

    return 0;
}

