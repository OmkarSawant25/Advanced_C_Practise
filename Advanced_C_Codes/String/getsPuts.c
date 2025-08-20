#include <stdio.h>
#include <string.h>
int main()
{
    // char ch[] = "Hello Omkar";
    // puts(ch);
    // printf("%s\n", ch);

    char str[40];
    // scanf("%s",str);            //only first word will be considered
    // gets(str);
    scanf("%[^\n]s",str);            //only first word will be considered
    printf("Input was : %s\n", str);


    return 0;
}
