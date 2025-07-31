#include <stdio.h>

int main()
{
	int arr[7] = {1,2,3,4,5,6,7};
    int a = 4;
    int count = 0;

	for(int i = 0; i < 7; i++)
	{
        if(i > a)
        {
            count++;
        }
	} 
    printf("The element of array is greater than a given number by %d.\n",count);
	
	return 0;
}