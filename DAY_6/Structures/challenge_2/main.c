#include <stdio.h>
#include <string.h>

struct Etudiant 
{
	char nom[50];
	char prenom[50];
	int note;
};

int main()
{
	struct Etudiant p1;
	

	printf("please enter your name : ");
	fgets(p1.nom, sizeof(p1.nom), stdin);
	
	p1.nom[strcspn(p1.nom, "\n")] = 0;

	printf("please enter your last name : ");
	fgets(p1.prenom, sizeof(p1.prenom), stdin);
	
	p1.nom[strcspn(p1.prenom, "\n")] = 0;

	printf("please enter your degre : ");
	scanf("%d", &p1.note);



	printf("--------afichage---------\n\n");

	printf("name : %s\n", p1.nom);
	printf("last name : %s\n", p1.prenom);
	printf("final note : %d\n\n", p1.note);

	printf("---------------------------\n");


	return 0;

}
