#include <stdio.h>
#include <unistd.h>

int my_strlen(char *str)
{
	int len = 0;

	while(str[len] != '\0')
	{
		len++;
	}

	return len;
}
void reverse(char *str)
{
	int len = my_strlen(str);
	
	int i = len - 1;
	
	while(i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}

	write(1, "\n", 1);

}

int main()
{

	char arr1[100];

	printf("please enter the first string : ");
	fgets(arr1, sizeof(arr1), stdin);



	reverse(arr1);
}
