#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n % 5 == 0 || n % 3 == 0)
    {
        if(n % 15 != 0)
        {
            printf("The number is divisible by 3 & 5 but not 15\n");  
        }
        else
        {
            printf("The number is divisible by 15\n");  
        }
    }
    else
    {
        printf("The number is not matching the condition\n");  
    }

    return 0;
} 
