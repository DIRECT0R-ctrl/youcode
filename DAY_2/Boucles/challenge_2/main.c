#include <stdio.h>

int main()
{
	unsigned int num, i, factorial;

	printf("please enter a number : \n");
	scanf("%u", &num);

	
	factorial = 1;

	for(i = 1; i <= num;i++)
	{
		factorial = factorial * i;
	}
	
	printf("the factorial of %u is : %u\n", num,factorial);
	return 0;
}
