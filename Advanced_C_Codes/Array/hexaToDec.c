#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int num;
    int bits[32]; // store 32 bits

    printf("Enter a hexadecimal number: ");
    scanf("%x", &num); // read hex

    // convert decimal → binary using division by 2
    for (int i = 31; i >= 0; i--)
    {
        bits[i] = num % 2;
        num = num / 2;
    }

    // print binary
    printf("32-bit Binary: ");
    for (int i = 0; i < 32; i++)
    {
        printf("%d", bits[i]);
    }
    printf("\n");

    return 0;
}
