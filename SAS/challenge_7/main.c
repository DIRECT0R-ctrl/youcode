#include <stdio.h>

int main()
{
	int a, b, c;

	printf("please enter the three coefficient : \n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	int Moyenne = (a*2 + b*3 + c*5) / (2+3+5);

	printf("the average is : %d\n", Moyenne);

	return 0;

}
