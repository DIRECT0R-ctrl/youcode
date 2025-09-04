#include <stdio.h>

int main()
{
	int num;

	printf("please enter a number : ");
	scanf("%d", &num);

	int i = 10;
	int somme;

	while (i >= 0)
	{
		somme = num * i;
		printf("%d * %d = %d\n", num, i, somme);
		i--;
	}

	return 0;
}
