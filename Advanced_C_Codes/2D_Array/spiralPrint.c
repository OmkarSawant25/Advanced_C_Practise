#include <stdio.h>

int main()
{
    int m;
    printf("Enter no of rows of matrix : ");
    scanf("%d", &m);
    int n;
    printf("Enter no of columns of matrix : ");
    scanf("%d", &n);
    int a[m][n];

    printf("Enter the elements of matrix : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n");
    int minr = 0;
    int minc = 0;
    int maxr = m - 1;
    int maxc = n - 1;
    int tne = m*n;
    int count = 0;

    while(count < tne)
    {
        // Print min row
        for(int j = minc; j <= maxc;j++)
        {
            printf("%d ", a[minr][j]);
            count++;
        }
        minr++;
        // Print the max col
        for(int i = minr; i <= maxr; i++)
        {
            printf("%d ", a[i][maxc]);
            count++;
        }
        maxc--;
        // Print the max row
        for(int j = maxc; j >= minc; j--)
        {
            printf("%d ", a[maxr][j]);
            count++;
        }
        maxr--;
        // Print the min col
        for(int i = maxr; i >= minr; i--)
        {
            printf("%d ", a[i][minc]);
            count++;
        }
        minc++;
    }
    return 0;
}