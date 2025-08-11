#include <stdio.h>

int main()
{
	int num, count = 0;
	printf("Enter number : ");
	scanf("%d", &num);

	int temp = num;
	while (temp >= 10)
	{
		temp = temp / 10;
		count++;
	}

	int first = temp;
	int last = num % 10;
	int power = 1;

	for (int i = 1; i <= count; i++)
	{
		power = power * 10;
	}

	int mid = num % power;
	mid = mid / 10;

	int final = last * power + mid * 10 + first;

	printf("Final Result is : %d", final);

	return 0;
}
