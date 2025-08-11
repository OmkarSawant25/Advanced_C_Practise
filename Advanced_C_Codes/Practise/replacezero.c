#include <stdio.h>

int main()
{
	int num, power = 1, res = 0, digit;
	printf("Enter the number : ");
	scanf("%d", &num);

	if (num == 0)
	{
		num = 1;
		printf("%d ", num);
		return 0;
	}

	while (num > 0)
	{
		digit = num % 10;
		if (digit == 0)
		{
			digit = 1;
		}
		res = res + digit * power;
		power = power * 10;
		num = num / 10;
	}

	printf("The number replace by zero is %d", res);

	return 0;
}
