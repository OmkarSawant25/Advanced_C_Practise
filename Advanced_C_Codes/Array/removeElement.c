#include <stdio.h>

int main()
{
    int arr[50], size, pos;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input position to delete
    printf("Enter position to delete (1 to %d): ", size);
    scanf("%d", &pos);

    if (pos < 1 || pos > size)
    {
        printf("Invalid position!\n");
    }
    else
    {
        // Shift elements left
        for (int i = pos - 1; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;

        // Print new array
        printf("Array after deletion:\n");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
