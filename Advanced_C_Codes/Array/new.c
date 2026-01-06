// Online C compiler to run C program online
#include <stdio.h>

// function prototype
// int sum(int a, int b); 
    // function defination
int sum(int *a, int *b)
{
    int c = *a + *b;
    *a = 50;
    *b = 12323;
    return c;
}

int main()
{
    int a = 5;
    int b = 10;

    // function call
    int c = sum(a, b); 
    // int c = sum(&a, &b); 
    printf("%d %d\n", a , b);
    printf("%d", c);
    return 0;
}

