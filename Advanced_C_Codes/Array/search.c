#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[7] = {12, 21, 30, 42, 55, 6, 7};
    int x = 21;
    bool flag = false;
    int idx = -1;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == x)
        {
            flag = true;
            idx = i;
            break;
        }
    }
    if (flag == false)
    {
        printf("%d is not present in the array\n", x);
    }
    else
        printf("%d is present in the array & index value is %d\n", x, idx);
    return 0;
}
