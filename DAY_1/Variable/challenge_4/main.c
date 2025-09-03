#include <stdio.h>

int main()
{
	float km;

	printf("please enter a value with km/h: \n");
	scanf("%f", &km);

	float m;

	m = km * 0.27778;

	printf("the value with m/s : %f\n", m);

	return 0;
}
