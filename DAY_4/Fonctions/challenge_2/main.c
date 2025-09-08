#include <stdio.h>

int produit(int a, int b)
{
	int result;
	result = a * b;

	return result;
}
int main()
{
	int a ,b;

	printf("please enter the numbers : ");
	scanf("%d",&a);
	scanf("%d", &b);

	int result;
	result = produit(a, b);

	printf("result = %d\n", result);

	return 0;
}
