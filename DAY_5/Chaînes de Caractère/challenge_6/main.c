#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
	char arr1[100];
	char arr2[100];


	printf("please enter main string : ");
	fgets(arr1 , sizeof(arr1), stdin);
	
	arr1[strcspn(arr1, "\n")] = '\0';

	write(1, "\n", 1);

	printf("please enter a character to find : ");
	fgets(arr2, sizeof(arr2), stdin);

	arr2[strcspn(arr2, "\n")] = '\0';
	
	int i = 0;
	int count = 0;

	while(arr1[i] != '\0')
	{
		if (arr1[i] == arr2[0])
		{
			count++;
		}
		i++;
	}
	
	printf("count : %d\n", count);
	

	return 0;
	
}
