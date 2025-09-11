#include <stdio.h>
#include <string.h>

struct Date 
{
	char jour[50];
	int mois;
	int annee;
};

int main()
{
	struct Date p1;
	struct Date *ptr;

	ptr = &p1;

	printf("----------------------------\n\n");
	printf("please enter a day : ");
	fgets((*ptr).jour, sizeof((*ptr).jour),stdin);

	(*ptr).jour[strcspn((*ptr).jour, "\n")] = '\0';

	printf("please enter a month : ");
	scanf("%d", &(*ptr).mois);


	printf("please enter a year : ");
	scanf("%d", &(*ptr).annee);

	printf("\n\n---------afichage-----------\n\n");

	printf("DATE : \n");

	printf("day : %s\n",(*ptr).jour);
	printf("month : %d\n", (*ptr).mois);
	printf("year : %d\n", (*ptr).annee);

	printf("\n\n----------------------------\n\n");

	return 0;
}
