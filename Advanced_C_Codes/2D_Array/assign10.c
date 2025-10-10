#include <stdio.h>

int main()
{
    int r,c;
    printf("Enter the number of rows & columns : ");
    scanf("%d%d", &r, &c);
    int arr[r][c];

    printf("\nThe elements in array are : \n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            arr[i][j] = 10;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
	return 0;
}
