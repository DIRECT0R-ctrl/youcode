#include <stdio.h>

struct Rectangle 
{
	float longueur;
	float largeur;
};


float calculate_aire(int l, int large)
{
	float result;

	result = l  * large;

	return result;
}

int main()
{
	
	struct Rectangle p1;
	
	printf("---------affichage---------------\n\n");
	printf("entrez longueur : ");
	scanf("%f", &p1.longueur);

	printf("entrez largeur : ");
	scanf("%f", &p1.largeur);


	float i = calculate_aire(p1.longueur, p1.largeur);

	printf("aire : %f\n\n", i);
	
	printf("--------------------------------------\n");
	return 0;
}
