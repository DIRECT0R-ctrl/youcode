#include <stdio.h>


int maximum(int a,int b)
{
	return (a > b) ? a : b;
}

int main()
{

	int a ,b;
	printf("please enter number 1 : ");
	scanf("%d", &a);
	printf("please enter number 2 : ");
	scanf("%d", &b);

	int result;

	result = maximum(a,b);

	printf("max = %d\n", result);
}
