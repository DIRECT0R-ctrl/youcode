#include <stdio.h>

int main()
{
	int num;
	printf("please enter a number : ");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("the number given is even .\n");
	} else {
		printf("the number you entered is odd .\n");
	}

	return 0;
}
