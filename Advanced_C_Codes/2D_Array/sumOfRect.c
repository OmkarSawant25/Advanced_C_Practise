#include <stdio.h>

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

    int l1, r1, l2, r2;
    printf("Enter l1, r1, l2, r2: ");
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

    int sum = 0;
    for(int i = l1; i <= l2; i++)
        for(int j = r1; j <= r2; j++)
            sum += a[i][j];

    printf("Sum of rectangle = %d\n", sum);
    return 0;
}