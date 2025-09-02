#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct pokemon // User defined datatype
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[20];
    } pokemon;

    pokemon arr[10];
    strcpy(arr[0].name, "Pikachu");
    arr[0].hp = 100;
    arr[0].speed = 80;
    arr[0].attack = 80;
    arr[0].tier = 'A';

    strcpy(arr[1].name, "Mewtwo");
    arr[1].hp = 123;
    arr[1].speed = 90;
    arr[1].attack = 80;
    arr[1].tier = 'B';

    strcpy(arr[2].name, "Charizard");
    arr[2].hp = 50;
    arr[2].speed = 80;
    arr[2].attack = 100;
    arr[2].tier = 'S';

    for (int i = 0; i < 3; i++)
    {
        printf("Name : %s\n", arr[i].name);
        printf("HP : %d\n", arr[i].hp);
        printf("Speed : %d\n", arr[i].speed);
        printf("Attack : %d\n", arr[i].attack);
        printf("Tier : %d\n\n", arr[i].tier);
    }
    return 0;
}
