#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
	char arr1[100];
	char arr2[100];

	printf("please enter the first : ");
	fgets(arr1, sizeof(arr1), stdin);
	
	arr1[strcspn(arr1, "\n")] = '\0';

	printf("please enter the second : ");
	fgets(arr2, sizeof(arr2), stdin);

	char result[200];

	int i = 0;
	int j = 0;

	while(arr1[i] != '\0')
	{
		result[i] = arr1[i];
		i++;
	}
	
	result[i] = ' ';
	i++;

	while (arr2[j] != '\0')
	{
		result[i] = arr2[j];
		i++;
		j++;
	}

	result[i] = '\0';

	printf("normal concatenation : %s\n", result);

	return 0;

}
