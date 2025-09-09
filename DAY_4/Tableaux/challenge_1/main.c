#include <stdio.h>

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	
	int i = 0;

	while(i < 5)
	{
		printf("tableau[%d] = %d\n",i + 1, arr[i]);
		i++;
	}
	return 0;
}
