#include <stdio.h>
#icnlude <math.h>

int main()
{
	float a, b, c;
	float moyenne;

	printf("please enter the three values : ! ");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);

	moyenne = cbrt(a * b *c);

	printf("the geometric average : %f", moyenne);

	return 0;
}
