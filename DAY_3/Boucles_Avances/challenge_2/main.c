#include <stdio.h>

int main()
{
	unsigned int num;
	

	printf("please enter the number of rows : ");
	scanf("%d", &num);
	
	int i;
	int j;
	for(i = 0; i <= num; i++) 
	{
		
		for (j = 1; j <= num - i; j++)
		{
			printf(" ");

		}

		for (j = 1; j <= 2 * i - 1;j++)
		{
			printf("*");
		}

		printf("\n");	
	}
		
	return 0;

}	
