#include <stdio.h>
#include <string.h>


char *my_tolower(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'A' )
			str[i] = str[i] + 32;

		i++;
	}
	return str;
};

int main()
{
	printf("\n\n-----------------------------\n\n");
	
	char arr[100];

	printf("please enter en array : ");
	fgets(arr, sizeof(arr), stdin);

	arr[strcspn(arr, "\n")] = 0;

	printf("your string with lower case : [ %s ]\n", my_tolower(arr));		
	printf("\n\n------------------------------\n\n");


}
