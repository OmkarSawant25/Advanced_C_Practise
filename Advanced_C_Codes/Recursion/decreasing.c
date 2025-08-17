#include<stdio.h>

int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);
	int fact = factorial(n);
	printf("The Factorial of given number %d is %d\n", n, fact);

	return 0;
}
