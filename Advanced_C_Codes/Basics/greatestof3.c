#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Enter 3rd number : ");
    scanf("%d",&c);

    if(a > b)
    {
        if(a > c)
        {
            printf("%d is greatest\n",a);  
 
        }
        else
        {
            printf("%d is greatest\n",c); 
        }
        
    }
    else
    {
        if(b > c)
        {
            printf("%d is greatest\n",b);  
 
        }
        else
        {
            printf("%d is greatest\n",c); 
        }  
    }

    return 0;
} 
