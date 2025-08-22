#include <stdio.h>
#include <string.h>
int main()
{
    char a[20] = "College";
    printf("%s\n", a);
    // 2nd index warti 'k' add kara and baiche pudhe shift
    for (int i = 6; i >= 3; i--)
    {
        a[i + 1] = a[i];
    }
    a[3] = 'k';
    printf("%s\n", a);

    return 0;
}
