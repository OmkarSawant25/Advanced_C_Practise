#include <stdio.h>
int main()
{
    int size, count = 1;
    printf("Enter the size pf array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter element in array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] != arr[size - i - 1])
        {
            count = 0;
            break;
        }
    }

    if (count)
    {
        printf("Given Array is a Palindrome\n");
    }
    else
        printf("Given Array is not a Palindrome\n");

    return 0;
}