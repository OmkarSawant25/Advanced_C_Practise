#include <stdio.h>

int main()
{
    int m;
    printf("Enter your marks : ");
    scanf("%d",&m);


    if(m > 80 && m <= 100)
    {
        printf("A Grade\n");  
    }
    else if(m > 60 && m <= 80)
    {
        printf("B Grade\n"); 
    }
    else if(m > 40 && m <= 60)
    {
        printf("C Grade\n"); 
    }
    else
    {
        printf("Fail\n"); 
    }


    return 0;
} 
