#include <stdio.h>
#include <string.h>

struct Liver 
{
	char titre[50];
	char auteur[50]; 
	int anne;
};


void livre_info()
{
        
	struct Liver p1;

	printf("please enter the title : ");
	fgets(p1.titre, sizeof(p1.titre), stdin);

	p1.titre[strcspn(p1.titre, "\n")] = 0;

	printf("please enter the auteur : ");
	fgets(p1.auteur, sizeof(p1.auteur), stdin);

	p1.auteur[strcspn(p1.auteur, "\n")] = 0;

	printf("please enter the year : ");
	scanf("%d", &p1.anne);


	printf("\n\n-------affichage--------\n\n");

	printf("Title : %s\n",p1.titre);
	printf("autor : %s\n", p1.auteur);
	printf("year  : %d\n\n", p1.anne);

	printf("--------------------------------\n");


}
int main()
{
	livre_info();
	return 0;
}
