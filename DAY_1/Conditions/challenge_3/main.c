#include <stdio.h>

int main()
{
	int a,b;
	printf("please enter the tow numbers : ");
	scanf("%d", &a);
	scanf("%d", &b);

	int somme;
	if (a == b)
	{
		somme = 3 * (a + b);
		printf("result : %d\n", somme);
	} else {
		somme = a + b;
		printf("result : %d\n", somme);
	}

	return 0;
}
