#include <stdio.h>

int main()
{
	float Celsius, Kelvin;
	
	printf("please enter a celsius value ! :\n");
	scanf("%f", &Celsius);


	Kelvin = Celsius + 273.15;

	printf(" the kelvin tempurature  ! : %f\n", Kelvin);

	return 0;
}
