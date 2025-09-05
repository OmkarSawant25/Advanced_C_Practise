#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct pokemon // User defined datatype
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[20];
} pokemon;

int main()
{
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 100;
    pikachu.speed = 90;
    strcpy(pikachu.name, "Pikachu");
    pokemon *x = &pikachu;
    printf("%p\n", x);
    printf("%p\n", &pikachu.hp);
    printf("%p\n", &pikachu.attack);
    printf("%p\n", &pikachu.speed);
    printf("%p\n", pikachu.name);

    return 0;
}
