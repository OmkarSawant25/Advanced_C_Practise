#include <stdio.h>

int main()
{
    int arr[50], size, pos, value;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input position and value
    printf("Enter position to insert (1 to %d): ", size + 1);
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &value);

    // Shift elements to right
    for (int i = size; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[pos - 1] = value;
    size++;

    // Print new array
    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
