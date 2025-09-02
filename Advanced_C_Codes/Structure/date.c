#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    typedef struct date // User defined datatype
    {
        int day;
        int month;
        int year;
    } date;

    date a, b, c;

    a.day = 25;
    a.month = 9;
    a.year = 2002;

    b.day = 25;
    b.month = 9;
    b.year = 2025;

    c = a;
    bool flag = true;

    // if(a.day != b.day) flag = false; 
    // if(a.month != b.month) flag = false; 
    // if(a.year != b.year) flag = false; 

    if(a.day != c.day) flag = false; 
    if(a.month != c.month) flag = false; 
    if(a.year != c.year) flag = false; 
    
    
    if(flag == true) printf("The dates are same\n");
    else printf("The dates are different\n");


    return 0;
}
