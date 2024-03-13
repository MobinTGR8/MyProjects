#include<stdio.h>
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int n, i, j, unique;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements in the array:\n");
    for(i = 0; i < n; i++)
        {
        unique = 1;  // Assume arr[i] is unique

        // Check if arr[i] is present in the preceding elements
        for(j = 0; j < i; j++)
            {
            if(arr[i] == arr[j])
            {
                unique = 0;  // arr[i] is not unique
                break;
            }
        }

        // Check if arr[i] is present in the following elements
        for(j = i + 1; j < n; j++)
            {
            if(arr[i] == arr[j])
            {
                unique = 0;  // arr[i] is not unique
                break;
            }
        }

        // If arr[i] is unique, print it
        if(unique)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

