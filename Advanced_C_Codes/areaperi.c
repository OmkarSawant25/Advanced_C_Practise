#include <stdio.h>

int main()
{
    int l, b;
    printf("Enter length : ");
    scanf("%d",&l);
    printf("Enter breadth : ");
    scanf("%d",&b);
    
    int a = l * b;
    int p = 2 * (l + b);

    if(a > p)
    {
        printf("Area is greater than perimeter\n");  
    }
    else
    {
        printf("Perimeter is greater than area\n");   
    }
    return 0;
}