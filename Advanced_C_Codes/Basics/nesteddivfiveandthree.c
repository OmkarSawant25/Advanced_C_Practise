#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n % 5 == 0)
    {
        if(n % 3 == 0)
        {
            printf("The number is divisible by 3 & 5\n");  
        }
        else
        {
            printf("The number is not divisible by 3 & 5\n");  
        }
    }
    else
    {
        printf("The number is not divisible by 3 & 5\n");  
    }

    return 0;
} 
