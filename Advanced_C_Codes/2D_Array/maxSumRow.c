#include <stdio.h>
#include <limits.h>

int main()
{
    int n, m;
    printf("Enter rows and cols: ");
    scanf("%d %d", &n, &m);

    int a[n][m];
    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    int sum = 0;
    int MaxSum = INT_MIN;
    int maxIndex = 0;
    for(int i = 0; i < n; i++)
    {
        sum = 0;
        for(int j = 0; j < m; j++)
        {
            sum += a[i][j];
        }
        if(MaxSum < sum)
        {
            MaxSum = sum;
            maxIndex = i;
        }
    }
        
    printf("Sum of Row with max Sum is %d and the row number is %d\n", MaxSum, maxIndex);
    return 0;
}