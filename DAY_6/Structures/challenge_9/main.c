#include <stdio.h>
#include <string.h>

struct Compte 
{
	char nom[50];
	float solde;
};

void ajouter()
{
	struct Compte p1;

	printf("-------------------\n\n");

	printf("please enter your name : ");
	fgets(p1.nom, sizeof(p1.nom),stdin);

	p1.nom[strcspn(p1.nom, "\n")] = '\0';

	printf("please enter the amount you want to edite : ");
	scanf("%f", &p1.solde);

 	printf("\n-------affichage-------\n\n");
	printf("your name : %s\n\n", p1.nom);
	printf("your amount : %.2f\n",p1.solde);
	printf("\n------------------------\n\n");
}

int main()
{
	ajouter();
	return 0;
}
