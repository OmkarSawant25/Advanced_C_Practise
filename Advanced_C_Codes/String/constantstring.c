#include <stdio.h>
#include <string.h>
int main()
{
    char *ptr = "Omkar Sawant";
    printf("%s ", ptr);
    // printf("%s ", *ptr);  //Gives only the first character
    ptr = "Sawant";
    printf("%s ", ptr);

    return 0;
}
