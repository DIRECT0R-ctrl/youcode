#include <stdio.h>
#include <unistd.h>

int somme(int a,int b)
{

	int somme = a + b;

	return somme;
}

int main()
{
	int a,b;

	printf("enter the tow numbers : ");
	scanf("%d",&a);
	scanf("%d",&b);
	
	int result;
	result = somme(a,b);

	printf("the result = %d\n", result);
}
