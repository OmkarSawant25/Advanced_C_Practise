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

    int one = 0;
    int MaxOne = INT_MIN;
    int maxIndex = 0;
    for(int i = 0; i < n; i++)
    {
        one = 0;
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] == 1)
                one++;
        }
        if(MaxOne < one)
        {
            MaxOne = one;
            maxIndex = i;
        }
    }
        
    printf("Max number of one is %d and the row number is %d\n", MaxOne, maxIndex);
    return 0;
}