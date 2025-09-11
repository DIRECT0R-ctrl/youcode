#include <stdio.h>
#include <string.h>
#include <math.h>

#define _USE_MATH_DEFINES

#define PI 3.14

struct Cercle
{
	int rayon;
};

float aire_cercle(struct Cercle c)
{
	
	 return PI * c.rayon * c.rayon;
	
	
};

int main()
{
	struct Cercle c;

	printf("-----------------------\n\n");


	printf("please enter radius : ");
	scanf("%d", &c.rayon);

	float i = aire_cercle(c);

	printf("aire = %.2f", i);

	printf("\n\n----------------------\n\n");
}
