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

void change(pokemon *p)
{
    p->hp = 100;
    p->attack = 200;
    p->speed = 190;
    p->tier = 'S';
    strcpy(p->name, "achu");
}

int main()
{
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 100;
    pikachu.speed = 90;
    pikachu.tier = 'A';
    strcpy(pikachu.name, "Pikachu");
    // pokemon *x = &pikachu;
    printf("Hp %d\n", pikachu.hp);
    printf("Attack %d\n", pikachu.attack);
    printf("Speed %d\n", pikachu.speed);
    printf("Name %s\n", pikachu.name);
    printf("Tier %c\n\n", pikachu.tier);
    change(&pikachu);
    printf("Hp %d\n", pikachu.hp);
    printf("Attack %d\n", pikachu.attack);
    printf("Speed %d\n", pikachu.speed);
    printf("Name %s\n", pikachu.name);
    printf("Tier %c\n", pikachu.tier);

    return 0;
}
