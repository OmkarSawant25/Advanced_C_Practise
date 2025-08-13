#include <stdio.h>

int main()
{
    int x;
    printf("Enter a num : ");
    scanf("%d",&x);
    
    if(x < 0)
    {
        x = x * (-1);
    }
    printf("The absolute value is : %d\n",x);   
    return 0;
}
