/*
	int - %d
	float - %f
	char - %c
	double - %lf
	long - %ld
*/

#include <stdio.h>

void main(){

	int x = 10;
	char ch = 'A';
	float f = 20.5f;
	double d = 35.5343;
	long l = 200000l;

	printf("x = %d\n",x);
	printf("ch = %c\n",ch);
	printf("f = %f\n",f);
	printf("d = %lf\n",d);
	printf("l = %ld\n",l);
}

