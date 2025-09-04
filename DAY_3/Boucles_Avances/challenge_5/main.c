#include <stdio.h>

int main()
{
	int i = 0,num;
	int result = 0;

	printf("please enter a number : ");
	scanf("%d", &num);

	while (i <= num)
	{
		result = result + i;
		i++;
	}

	printf("result = %d\n", result);

	return 0;
}
