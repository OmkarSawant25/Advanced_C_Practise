#include <stdio.h>
int Sum(int *a)
{
    int Sum = 0;
    int size = sizeof(a) / sizeof(a[0]);
    printf("SOE size of A = %ld, size of A[0] = %ld ",sizeof(a) , sizeof(a[0]));
    for (int i = 0; i < size; i++)
    {
        Sum += a[i];
    }
    return Sum;
}

int main()
{
    int a[] = {2, 4, 5, 8, 1};
    int total = Sum(a);
    printf("\nThe Sum of elements in array = %d\n", total);

    return 0;
}
