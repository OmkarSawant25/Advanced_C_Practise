#include <stdio.h>
#include <limits.h>
int main()
{
    // int arr[7] = {-10, -4, -200, -80, -19, -5, -12};
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int max = INT_MIN;
    int smax = INT_MIN;

    for (int i = 0; i < 7; i++)
    {
        if (max < arr[i])
        {
            smax = max; // smax is previous max
            max = arr[i];
        }
        else if (smax < arr[i] && max != arr[i]) // max > arr[i]
        {
            smax = arr[i];
        }
    }

    printf("Second Maximum number in an array is %d\n", smax);

    return 0;
}
