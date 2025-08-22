#include <stdio.h>
#include <string.h>
int main()
{
    char str[20] = "Omkar Sawant";
    char *ptr = str;
    printf("Address is : %p\n", str);
    printf("Address is : %p\n", ptr);
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");

    return 0;
}
