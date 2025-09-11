#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Employe 
{
	char nom[50];
	float salaire;
};

int main()
{
	int n;
	printf("how much emplyees you want to enter : ");
	scanf("%d", &n);

	struct Employe *p = malloc(n * sizeof(struct Employe));

	if (p == NULL)
	{
		printf("allocation problem ! \n");
		return 1;
	}

	int i = 0;

	while (i < n)
	{
		getchar();
		printf("enter the name [%d] : ", i + 1);
		
		fgets(p[i].nom, sizeof(p[i].nom), stdin);
		p[i].nom[strcspn(p[i].nom, "\n")] = 0;

		printf("salary of the employe [%d] : ", i + 1);
		scanf("%f", &p[i].salaire);

		i++;
	}
	
	printf("\n----- the list fo the emplyee --\n");

	for (int i = 0; i < n; i++)
	{
		printf("name : %s | salary : %.2f\n", p[i].nom, p[i].salaire);
	}


};
