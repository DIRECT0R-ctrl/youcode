#include <stdio.h>

int main()
{
	unsigned int num;

	printf("please enter a number : \n");
	scanf("%u", &num);

	int i = 1;
	
	int odd = 1;

	while (i <= num)
	{
		odd = 2 * i - 1;
		printf("%d, ", odd);
		i++;
	}

	puts("\n");
	
	return 0;
}
