#include <stdio.h>

int main()
{
    int arr[99];
    int sum = 0, sum2;
    sum2 = (100 * (100 + 1)) / 2;
    for (int i = 0; i <= 100; i++)
    {
        if (i == 45 || i == 0)
        {
            continue;
        }
        arr[i] = i;
        sum = sum + arr[i];
    }

    printf("The missing number is %d\n", sum2 - sum);

    return 0;
}
