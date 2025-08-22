#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Omkar Sawant";
    char *ptr = str;
    // ptr = "Sawant";
    printf("%s \n", str);
    *ptr = 'A';
    printf("%s \n", ptr);

    return 0;
}
