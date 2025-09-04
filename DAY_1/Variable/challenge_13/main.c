#include <stdio.h>

int main()
{
	int num = 0;
	
	printf("please enter a number : ");
	scanf("%d", &num);

	printf("binary representation of the number : %b\n", num);
	printf("hexadecimal representation of the number : %x\n", num);

	return 0;
}
