#include <stdio.h>

int smaximum(int a[])
{
	int max = a[0];
	int smax = a[0];
	for (int i = 0; i < 5; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
		if (smax > a[i])
		{
			smax = a[i];
		}
	}
	for (int i = 0; i < 5; i++)
	{
		if (max > a[i] && smax < a[i])
		{
			smax = a[i];
		}
	}
	return smax;
}

// int smaximum(int a[])
// {
// 	int max = a[0];
// 	int smax;
// 	printf("%d\n", smax);
// 	for(int i = 0; i < 5; i++)
// 	{
// 		if(max < a[i]){
// 			smax = max;
// 			max = a[i];
// 		}
// 		else if(smax < a[i] && a[i] != max){
// 			smax = a[i];
// 		}
// 	}
// 	return smax;
// }

int main()
{
	int arr[5] = {5, 1, 2, -4, 3};
	// int arr[5] = {50,20,30,40,10};
	int smax = smaximum(arr);
	printf("Smax is %d\n", smax);
	return 0;
}
