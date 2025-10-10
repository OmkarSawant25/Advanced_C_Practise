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
    int index[2] = {0,0};
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                index[0] = i;
                index[1] = j;
            }
            
        }
    }
    printf("MAX of the given matrix is %d and their index is (%d, %d)\n", max, index[0],index[1]);

    return 0;
}
