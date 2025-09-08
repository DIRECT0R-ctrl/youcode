#include <stdio.h>

long long factorielle(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}

	long long result = 1;

	int i = 2;

	while(i <= n)
	{
		result = result * i;
		i++;
	}

	return result;
}

int main()
{
	int n;

	printf("enter a number : ");
	scanf("%d", &n);

	long long result = n * factorielle(n - 1);
	printf("result : %lld\n", result);

	return 0;
}
