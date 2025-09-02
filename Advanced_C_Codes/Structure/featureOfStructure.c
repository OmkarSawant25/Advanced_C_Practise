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

    book a, b;
    a.pages = 100;
    a.price = 250.25;
    strcpy(a.name, "Secret Seven");

    b = a; // Deep copy : A deep copy, in contrast, creates a completely independent copy of the original object, including all its nested objects. It recursively copies all levels of the object structure, creating new instances of any referenced objects. This ensures that the deep copy is entirely independent of the original object; changes made to the deep copy, including modifications to its nested objects, will not affect the original object, and vice versa.
    printf("%d\n", a.pages);
    printf("%f\n", a.price);
    printf("%s\n", a.name);

    printf("%d\n", b.pages);
    printf("%f\n", b.price);
    printf("%s\n", b.name);
}
