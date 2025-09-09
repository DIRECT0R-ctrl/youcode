#include <stdio.h>

int main()
{
	char arr[100];

	printf("please enter a serie of characters : ");
	fgets(arr, sizeof(arr),stdin);

	printf("you entered : %s", arr);
	return 0;
}
