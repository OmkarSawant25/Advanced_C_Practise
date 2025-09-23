#include <stdio.h>

int main()
{
    int arr[6] = {1, 2, 3, 2, 1, 4};
    int max = 0;
    int maxFreq = 0;
    for (int i = 0; i < 6; i++)
    {
        int count = 0;
        for (int j = 0; j < 6; j++)
        {
            if (j < i)
            {
                if (arr[i] == arr[j])
                {
                    break;
                }
            }
            else
            {
                if (arr[i] == arr[j])
                    count++;
            }
        }
        if(count>0)
        {
            if(count >= max)
            {
                max = count;
                maxFreq = count;
            }
            else if (count == max) 
            {
                maxFreq += count;
            }
        }
    }
    printf("%d \n",maxFreq);

    return 0;
}
