#include <stdio.h>

int main()
{
	unsigned int num, i, somme;

	printf("please enter a number : \n");
	scanf("%u", &num);

	
	somme = 0;

	for(i = 1; i <= num;i++)
	{
		somme = somme + i;
	}
	
	printf("the sum of the first natural numbers is %u is : %u\n", num,somme);
	return 0;
}
