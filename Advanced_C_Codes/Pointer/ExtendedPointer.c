#include <stdio.h>

int main()
{
    int x = 5, *p, **q, ***r;
    p = &x;
    q = &p;
    r = &q;
	printf("x value is %d\n",x);
    **q = 10;
	printf("x value is %d\n",x);
	***r = 15;
    printf("x value is %d\n",x);

	return 0;
}


