#include <stdio.h>

int est_pair(int nb)
{
	return (nb % 2 == 0) ? 1 : 2;
}

int main()
{
	int nb;

	printf("please enter a number : ");
	scanf("%d", &nb);

	int result = est_pair(nb);
	
	if (result == 1)
	{
		printf("returned : %d : even number .\n", result);
	} else {
		printf("returned %d : odd number .\n", result);
	}

	return 0;

}
