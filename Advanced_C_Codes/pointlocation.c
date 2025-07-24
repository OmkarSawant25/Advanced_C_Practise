#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter the coordinates : ");
    scanf("%d %d",&x,&y);

    if(x == 0 && y == 0)
    {
        printf("The point is origin\n");
    }
    else if(x == 0)
    {
        printf("Lies on y-axis\n");
    }
    else if(y == 0)
    {
        printf("Lies on x-axis\n");
    }
    else
    {
        printf("The point does not Lies on x-axis oy y axis\n");
    }

    return 0;
} 
