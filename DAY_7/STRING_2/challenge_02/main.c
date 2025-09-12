#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
char *my_ponc(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if (!ispunct((unsigned char)str[i]))
			write(1, &str[i], 1);
			write(1, " ", 1);
		i++;
	}	

	return str;

}

int main()
{

	char arr[100];
	printf("\n\n--------------------------\n\n");
	printf("please enter a string : ");
	fgets(arr, sizeof(arr), stdin);

	my_ponc(arr);
	

	printf("\n\n---------------------------\n\n");


}
