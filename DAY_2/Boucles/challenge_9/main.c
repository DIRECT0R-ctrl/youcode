#include <stdio.h>

int main()
{
	int num;

	printf("please enter a number : ");
	scanf("%d", &num);

	int i = 0;
	
	if (num == 0 )
	{
		printf("1\n");
		return 0;
	}
	
	float amount = 0;
	while (num > 0)
	{
		num = num / 10;
		i++;
		amount++;

	}
	
	printf("%f chiffres\n", amount);
}
