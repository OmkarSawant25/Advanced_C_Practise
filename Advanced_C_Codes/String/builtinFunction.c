#include <stdio.h>
#include <string.h>
int main()
{
    // char *p = "Omkar";
    // int x = strlen(p);
    // printf("%d \n",x);

    // char str1[10] = "Omkar";
    // char str2[10];
    // strcpy(str2,str1);
    // printf("%s \n", str2);
    // str2[0] = 'P';
    // printf("%s \n", str2);      //Deepcopy is made 

    char str1[15] = "Omkar";
    char str2[] = " Sawant";
    strcat(str1,str2);
    printf("%s \n", str1);
    printf("%s \n", str2);      //Deepcopy is made 

    return 0;
}
