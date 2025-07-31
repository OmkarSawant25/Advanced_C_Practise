#include <stdio.h>
int main()
{
	int arr[8] = {-9,-2,-11,-13,-3,-4,-8,-7};
    // int arr[8] = {9,2,11,13,3,4,8,7};
	int max = arr[0];

	for(int i = 0; i < 8; i++)
	{
		if(max < arr[i])
        {
            max = arr[i];
        }
	}
	printf("Maximum number in an array is %d\n",max);

	return 0;
}

/*------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>
// #include <limits.h>

// int main()
// {
// 	int arr[8] = {-9,-2,-11,-13,-3,-4,-8,-7};
//     // int arr[8] = {9,2,11,13,3,4,8,7};
// 	int max = INT_MIN;                  //takes the smaller num

// 	for(int i = 0; i < 8; i++)
// 	{
// 		if(max < arr[i])
//         {
//             max = arr[i];
//         }
// 	}
// 	printf("Maximum number in an array is %d\n",max);

// 	return 0;
// }
