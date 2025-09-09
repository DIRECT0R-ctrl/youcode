#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	char arr1[100];
	char arr2[100];

	printf("please enter a array : ");
	fgets(arr1, sizeof(arr1), stdin);
	
	arr1[strcspn(arr1, "\n")] = '\0';

	int i = 0;

	while(i < strlen(arr1))
	{
		arr2[i] = toupper((char)arr1[i]);
		i++;
	}

	arr2[strlen(arr1)] = '\0';

	printf("your string with upper case : %s\n", arr2);
	return 0;
}
