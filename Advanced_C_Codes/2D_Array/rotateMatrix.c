#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows / columns : ");
    scanf("%d", &n);

    int arr[n][n];

    //Input
    printf("Enter the elements in array : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // Rotate
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        int k = n - 1;
        while(j < k)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }

    //Output
    printf("\nThe elements in array are : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
