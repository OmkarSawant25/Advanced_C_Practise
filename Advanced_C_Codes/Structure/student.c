#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct student // User defined datatype
{
    int rollno;
    char name[20];
    char dept[20];
    char course[20];
    int yearOfjoining;

} student;

void check(student a, student b)
{
    if (strcmp(a.dept , b.dept) == 0)
        printf("Both are of same department\n");
    else
        printf("Both are not of same department\n");
}

int main()
{
    student s1, s2;
    strcpy(s1.dept, "iit");
    strcpy(s2.dept, "it");
    check(s1, s2);
    return 0;
}
