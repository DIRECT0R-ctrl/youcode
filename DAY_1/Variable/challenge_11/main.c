#include <stdio.h>

int main()
{
	int length, width, surface;

	printf("please enter length and width : ");
	scanf("%d", &length);
	scanf("%d", &width);
	
	surface = length * width;

	printf("the surface of the Rectangle : %d\n", surface);
	
	return 0;
}
