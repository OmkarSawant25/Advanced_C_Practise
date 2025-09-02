#include <stdio.h>
#include <string.h>

int main()
{
    struct book
    {
        char name[20];
        int pages;
        float price;
    } a, b, c;

    a.pages = 100;
    a.price = 250.25;
    strcpy(a.name, "Secret Seven");

    printf("%d\n", a.pages);
    printf("%f\n", a.price);
    printf("%s\n", a.name);

    b.pages = 200;
    b.price = 422.7;
    strcpy(b.name, "Famous Five");

    printf("%d\n", b.pages);
    printf("%f\n", b.price);
    printf("%s\n", b.name);

    return 0;
}
