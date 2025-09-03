#include <stdio.h>

int main()
{
	float T;
	
	printf("please enter the temperature with Celsius value ! : \n");
	scanf("%f", &T);

	if (T < 0)
	{
		printf("water state is solid !\n");
	} else if (T >= 0 && T <= 100 )
	{
		printf("water state is liquid !\n");
	} else {
		printf("water state is GAZ !\n");
	}

	return 0;
}
