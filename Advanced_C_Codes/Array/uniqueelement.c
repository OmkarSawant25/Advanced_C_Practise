#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[7] = {4, 1, 2, 1, 2};

    for (int i = 0; i < 5; i++)
    {
        bool flag = false;
        for (int j = 0; j < 5; j++)
        {
            // if (arr[i] == arr[j])
            // {
            //     i++;
            //     j = i + 1;
            // }
            if (arr[i] == arr[j] && i != j)
            {
                flag = true;
            }
        }
        if (flag == false)
        {
            printf("%d is the unique element\n", arr[i]);
            break;
        }
    }
    return 0;
}
