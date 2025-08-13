#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    if(n > 99 && n < 1000)
    {
        printf("It is a three digit num\n");  
    }
    else
    {
        printf("It is not a three digit num\n");  
    }
    return 0;
}
