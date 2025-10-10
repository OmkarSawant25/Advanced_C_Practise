#include <stdio.h>

int main()
{
    // 1st matrix
    int m;
    printf("Enter no of rows of 1st matrix : ");
    scanf("%d", &m);
    int n;
    printf("Enter no of columns of 1st matrix : ");
    scanf("%d", &n);
    int a[m][n];

    printf("Enter the elements of 1st matrix : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // 2nd matrix
    int p;
    printf("Enter no of rows of 2nd matrix : ");
    scanf("%d", &p);
    int q;
    printf("Enter no of columns of 2nd matrix : ");
    scanf("%d", &q);
    int b[p][q];

    printf("Enter the elements of 2nd matrix : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if (n != p)
    {
        printf("The matrices cannot be multiplied\n");
    }
    else
    {
        int res[m][q];
        int cr = n;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < cr; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("The resultant matrix is : \n");

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
