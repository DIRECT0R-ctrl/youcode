#include <stdio.h>

int main()
{
	float Km;

	printf("please enter the value with kilometers ! : \n");
	scanf("%f", &Km);

	float Yards;

	Yards = Km * 1093.61;

	printf("the value with Yards ! = %f\n", Yards);

	return 0;
}
