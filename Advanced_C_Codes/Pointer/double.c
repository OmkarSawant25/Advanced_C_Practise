#include <stdio.h>
void Double(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        a[i] = 2 * a[i];
    }
}
void Print(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[] = {2, 4, 5, 8, 1};
    int size = sizeof(a) / sizeof(a[0]);
    printf("SOE size of A = %ld, size of A[0] = %ld \n", sizeof(a), sizeof(a[0]));
    printf("Before : ");
    Print(a, size);
    Double(a, size);
    printf("\nAfter :");
    Print(a, size);
    return 0;
}
