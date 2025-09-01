#include <stdio.h>

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};

	for (int i = 0; i < 5; i++)
	{
		printf("Enter element no. %d : ", i + 1);
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d \n", arr[i]);
	}
	return 0;
}
