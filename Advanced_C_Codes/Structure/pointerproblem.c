#include <stdio.h>
#include <string.h>
typedef int *int_pointer;
int main()
{
    int x = 5, y = 10;
    // int *a = &x, b = &y;  // int *a & int  y
    int_pointer a = &x, b = &y;
    printf("%p\n", a);
    printf("%p\n", b);

    return 0;
}
