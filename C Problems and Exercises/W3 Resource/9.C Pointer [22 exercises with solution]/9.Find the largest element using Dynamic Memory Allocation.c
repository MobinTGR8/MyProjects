#include <stdio.h>
#include <stdlib.h>
int findLargest(int *arr, int size)
{
    int max = *arr;
    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }
    }
    return max;
}

int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    int largest = findLargest(arr, n);
    printf("The largest element is: %d\n", largest);

    free(arr);

    return 0;
}

