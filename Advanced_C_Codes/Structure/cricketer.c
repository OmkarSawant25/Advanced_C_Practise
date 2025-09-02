#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct cricketer // User defined datatype
    {
        char name[20];
        char lastName[20];
        int age;
        int noOfMatches;
        float average;
    } cricketer;

    cricketer arr[3];
    for(int i = 0; i < 3; i++)
    {
        scanf("%s %s",arr[i].name,arr[i].lastName);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].noOfMatches);
        scanf("%f",&arr[i].average);
    }
    for(int i = 0; i < 3; i++)
    {
        printf("Name : %s %s\n",arr[i].name, arr[i].lastName);
        printf("Age : %d\n",arr[i].age);
        printf("Number of Matches Played : %d\n",arr[i].noOfMatches);
        printf("Average : %f\n\n",arr[i].average);
    }

    
    return 0;
}
