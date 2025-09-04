#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, start, end, target;

	start = 0;
	end = 19;
	
	printf("please enter a target : ");
	scanf("%d", &target);

	int arr[20] = {1, 2, 3, 4, 5, 6 , 7 , 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

	int mid;

	while (start <= end)
	{
		mid = (start + end) / 2;

		if (arr[mid] == target) {
			printf("the target found : %d", target);
			break;
		} else if (arr[mid] > target)
		{
			end = mid - 1;
		} else if (arr[mid] < target) 
		{
			start = mid + 1;
		} 
		
	}
	if (!target)
	{
		printf("the target is not found ! \n");
	}
	puts("\n");

	return 0;
}
