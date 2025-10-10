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

    int max = arr[0][0];
    int min = arr[0][0];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }
    printf("MAX of the given matrix is %d\n", max);
    printf("MIN of the given matrix is %d\n", min);

    return 0;
}
