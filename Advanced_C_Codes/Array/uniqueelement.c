#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[7] = {1, 2, 3, 1, 2, 3, 4};

    for (int i = 0; i < 7; i++)
    {
        bool flag = false;
        for (int j = 0; j < 7; j++)
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
