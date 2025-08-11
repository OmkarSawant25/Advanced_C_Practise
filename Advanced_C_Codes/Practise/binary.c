#include <stdio.h>

int main()
{
	int a, rem, i = 0;
	printf("Enter the number : ");
	scanf("%d", &a);
	int arr[10];

	while (a != 0)
	{
		rem = a % 2;
		arr[i] = rem;
		i++;
		a = a / 2;
	}

	for (int j = i - 1; j >= 0; j--)
	{
		printf("%d ", arr[j]);
	}

	return 0;
}
