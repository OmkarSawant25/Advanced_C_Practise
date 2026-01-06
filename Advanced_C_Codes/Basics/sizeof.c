// #include <stdio.h>
// int main()
// {
// int num = 5;
// printf("%ld:%ld:%ld\n", sizeof(int), sizeof num, sizeof 5);
// return 0;
// }

#include <stdio.h>
int main()
{
    // int num1 = 5;
    int num1 = sizeof(++num1);

    // int num2 = sizeof(++num1);
    // printf("num1 is %d and num2 is %d\n", num1, num2);
    printf("num1 is %d\n", num1);
    return 0;
}
