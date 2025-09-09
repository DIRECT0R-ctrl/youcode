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
void inverser_chaine(char str[])
{
	
	int len = my_strlen(str);
	
	if (str[len - 1] == '\n')
	{
		len--;
	}

	int i = len - 1;
	while( i >= 0)
	{
		write(1, &str[i], 1);
		write(1, " ", 1);
		i--;
	}

	write(1, "\n", 1);

}

int main()
{
	char str[100];

	printf("please enter a string : ");
	fgets(str, sizeof(str), stdin);

	inverser_chaine(str);

	return 0;


}
