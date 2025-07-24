#include <stdio.h>

int main()
{
    int x;
    printf("Enter a num : ");
    scanf("%d",&x);
    
    if(x % 2 == 0)
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
    }
    return 0;
}
