#include<stdio.h>
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int n, i, j;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int freq[n];  // To store the frequency of each element

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;  // Initialize frequency as -1
    }

    // Calculate frequency of each element
    for(i = 0; i < n; i++)
    {
        int count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;  // Mark the element as counted
            }
        }

        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    // Display the frequency of each element
    printf("Frequency of each element:\n");
    for(i = 0; i < n; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}

