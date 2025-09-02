#include <stdio.h>

int main()
{
	struct pokemon		// User defined datatype
	{ 
		int hp;
		int speed;
		int attack;
		char tier;
	};

	// struct pokemon		// User defined datatype
	// { 
	// 	int hp;
	// 	int speed;
	// 	int attack;
	// 	char tier;
	// } p1,p2,p3;			// We can also declare like this

	struct pokemon pikachu;
	printf("Enter the attack for Pikachu\n");
	scanf("%d", &pikachu.attack);
	// pikachu.attack = 60;
	pikachu.speed = 100;
	pikachu.hp = 50;
	pikachu.tier = 'A';

	printf("%d\n", pikachu.attack);
	struct pokemon charizard;
	charizard.attack = 130;
	charizard.speed = 80;
	charizard.hp = 80;
	charizard.tier = 'S';
	printf("%d\n", charizard.speed);
	
	return 0;
}
