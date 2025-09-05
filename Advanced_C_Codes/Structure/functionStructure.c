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

void fun(pokemon p)
{
    printf("%d\n", p.hp);
    return;
} 

void change(pokemon p)
{
    p.attack = 10;
    p.hp = 20;
    p.speed = 30;
}

int main()
{
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 100;
    pikachu.speed = 90;
    change(pikachu); 
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.speed);
    // fun(pikachu);
    return 0;
}
