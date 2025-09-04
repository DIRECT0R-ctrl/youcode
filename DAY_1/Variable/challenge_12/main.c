#include <stdio.h>

int main()
{
	int num;

	printf("please enter a number : ");
	scanf("%d", &num);
	
	int i = 0;
	int result = 0;

	while(num != 0)
	{
		result = result * 10 + (num % 10);
		num = num / 10;
		i++;
	}
	
	printf("%d\n", result);
	return 0;
}
