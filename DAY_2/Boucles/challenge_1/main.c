#include <stdio.h>

int main()
{
	int num;
	
	int mult = 1;

	printf("please enter a number : \n");
	scanf("%d", &num);
	
	while (mult <= 10)
	{
		int somme = num * mult;
		printf("%d * %d = %d\n", num, mult, somme);
		mult++;
	}
	return 0;
}
