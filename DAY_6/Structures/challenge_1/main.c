#include <stdio.h>
#include <string.h>

struct personne {

	char nom[50];
	char prenom[50];
	int age;
};

int main()
{
	
	struct personne p1;
	
	strcpy(p1.nom, "aymane");
	strcpy(p1.prenom,"laksimi");
	p1.age = 20;

	printf("---------affiche----------\n");
	printf("nom : %s\n", p1.nom);
	printf("prenom : %s\n", p1.prenom);
	printf("age : %d\n", p1.age);

	return 0;

}
