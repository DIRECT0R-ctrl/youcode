#include <stdio.h>

int main()
{
	float num1, num2;

	printf("please enter tow numbers : ! \n");
	scanf("%f",&num1);
	scanf("%f",&num2);

	char Operator;
	
	float somme;
	printf("please enter the operator you desire : !\n");

	scanf("%s", &Operator);

	if (Operator == 43)
	{
		somme = num1 + num2;
		printf("addition applied : %f\n", somme);
		return 0;
	} else if (Operator == 45)
	{
		somme = num1 - num2;
		printf("subtraction applied : %f\n", somme);
		return 0;
	} else if (Operator == '*')
	{
		somme = num1 * num2;
		printf("multiplication applied : %f\n", somme);
		return 0;
	} else if (Operator == '/')
	{
		somme = num1 / num2;
		printf("division applied : %f\n", somme);
		return 0;
	}

	return 0;
}
