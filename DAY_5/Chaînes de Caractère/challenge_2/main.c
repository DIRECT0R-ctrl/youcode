#include <stdio.h>

int my_strlen(char *str)
{
	int len = 0;

	while(str[len] != '\0')
	{
		len++;
	}
	
	return len;
}

int main()
{
	char arr[100];
	
	printf("please enter the a serie of characters : ");
	fgets(arr, sizeof(arr), stdin);

	int len = my_strlen(arr) - 1;

	printf("the length : %d\n", len);

	return 0;
}
