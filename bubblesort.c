
#include <stdio.h>

int main()
{
    int arr[100], n, c, d, swap;

    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for (c = 0; c < n; c++)
    {
        scanf("%d", &arr[c]);
    }
    
    for (c = 0; c < (n - 1); c++)
    {
        for (d = 0; d < n - c - 1; d++)
        {
            // For decreasing order use <
            if (arr[d] > arr[d + 1]) 
            {
                swap = arr[d];
                arr[d] = arr[d + 1];
                arr[d + 1] = swap;
            }
        }
    }

    printf("Sorted list in ascending order:\n");

    for (c = 0; c < n; c++)
    {
        printf("%d ", arr[c]);
    }
    
    return 0;

}
