#include<stdio.h>
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];
    printf("Enter %d elements in the first array:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Copying elements from arr1 to arr2
    for(i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("Elements copied from first array to second array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}

