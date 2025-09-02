#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct book
    {
        char name[20];
        int pages;
        float price;
    } book;

    book a;
    a.pages = 100;
    a.price = 250.25;
    strcpy(a.name, "Secret Seven");

    printf("%d\n", a.pages);
    printf("%f\n", a.price);
    printf("%s\n", a.name);
}
