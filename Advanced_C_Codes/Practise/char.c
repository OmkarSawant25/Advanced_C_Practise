#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if (i > 06)
            break;
        printf("A %d\n", i);
    }
}