#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter the number of rows & columns : ");
    scanf("%d%d", &r, &c);

    int arr[r][c];
    printf("Enter the elements in array : ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nThe elements in array are : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("Sum of the given matrix is %d\n", sum);
    return 0;
}
