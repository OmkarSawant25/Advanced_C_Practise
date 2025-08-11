#include <stdio.h>
int factorial(int);
int combination(int, int);

int main()
{
	int n;
	printf("Enter n : ");
	scanf("%d", &n);

	int r;
	printf("Enter r : ");
	scanf("%d", &r);

	int ncr = combination(n, r);
	printf("%d \n", ncr);

	return 0;
}

int factorial(int x)
{
	int fact = 1;
	for (int i = 2; i <= x; i++)
	{
		fact = fact * i;
	}
	return fact;
}

int combination(int n, int r)
{
	return factorial(n) / (factorial(r) * factorial(n - r));
}