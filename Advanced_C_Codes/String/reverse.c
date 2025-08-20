#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
    puts("Enter the String : ");
    scanf("%[^\n]s", str);
    // puts("The String size is : ");
    int size = 0;
    int i = 0;
    while(str[i] != '\0')
    {
        size++;
        i++;
    }
    for(int i = 0; i < size/2; i++)
    {
        int temp = str[i];
        str[i] = str[size - i - 1];
        str[size - i - 1] = temp;
    }
    puts("After Reversing the array");
    puts(str);

    return 0;
}
