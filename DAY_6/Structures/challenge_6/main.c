#include <stdio.h>
#include <string.h>
struct product 
{
	char name[50];
	float prix;
	int quantity;
};

void get_print_put()
{
	struct product pro[100];
	
	int n;
	
	printf("---------remplissage----------\n\n");
	printf("please enter how much product : ");
	scanf("%d", &n);

	int i = 0;

	while(i < n)
	{
		printf("please enter name of the product [%d] : ", i + 1);
		scanf("%s", pro[i].name);

		printf("please enter the price : ");
		scanf("%f", &pro[i].prix);

		printf("please enter the quantity : ");
		scanf("%d", &pro[i].quantity);

		i++;
	}
	
	i = 0;
	
	printf("\n\n---------affichage--------\n\n");
	while(i < n)
	{
		printf("name of your product : %s\n\n", pro[i].name);
	
		printf("price of your product : %f\n\n", pro[i].prix);
		
		printf("quantity : %d", pro[i].quantity);
	
		i++;
	}

}

int main()
{
	
	
		
	get_print_put();

	printf("\n\n----------------------------\n\n");



}
