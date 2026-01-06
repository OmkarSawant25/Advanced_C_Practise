#include <stdio.h>

int main()
{
	int n;
	printf("Enter the num :");
	scanf("%d", &n);
	int count = 0;
	int y = n;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	printf("Count of %d is %d\n", y, count);
}
