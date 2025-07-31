#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d", &size);

    int arr[size];
    int brr[size];
    printf("Enter the array elements : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements before reversing : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        brr[i] = arr[size - 1 - i];
    }

    printf("\nArray elements after reversing : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", brr[i]);
    }

    return 0;
}
