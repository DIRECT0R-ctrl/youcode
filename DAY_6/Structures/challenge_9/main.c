#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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

	printf("please enter the amount : ");
	scanf("%f", &p1.solde);

 	printf("\n-------affichage-------\n\n");
	printf("your name : %s\n\n", p1.nom);
	
	
	
	printf("your amount : %.2f\n",p1.solde);
	
	int i = 0;
	while(1)
	{
		printf("proceed ...");
		
		int s;
		int result = 0;
		printf("please enter the amount you wanna add : ");
		scanf("%d", &s);

		p1.solde = p1.solde + s;

		printf("new amount is ! %.2f\n\n", p1.solde);
			
		printf("\n\n---------------------------\n\n");
		
		char x[50];
		printf("if you want to exit write  exit if you want to stay wite something : ");
		scanf("%s", x);

		x[strcspn(x, "\n")] = 0;
		
		
		
		if (strcmp(x, "exit") == 0 || strcmp(x, "EXIT") == 0)
		{
		
			break;
		}

		
	}
	printf("\n------------------------\n\n");

	
	
}

int main()
{
	ajouter();
	return 0;
}
