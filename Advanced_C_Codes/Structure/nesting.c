#include <stdio.h>
#include <string.h>
#include <stdbool.h>

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
    typedef struct legendarypokemon // User defined datatype
    {
        pokemon n;
        char ability[20];
    } legendarypokemon;

    typedef struct godpokemon // User defined datatype
    {
        legendarypokemon legend;
        int specialAttack;
    } godpokemon;

    godpokemon arceus;
    arceus.specialAttack = 300;
    strcpy(arceus.legend.ability ,"Turns Anyone to Stone");
    arceus.legend.n.attack = 500;

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability, "Pressure");
    mewtwo.n.hp = 150;
    mewtwo.n.attack = 180;
    strcpy(mewtwo.n.name,"Mewtwo");
    mewtwo.n.speed = 180;
    mewtwo.n.tier = 'S';
   
    return 0;
}
