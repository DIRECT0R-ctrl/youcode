#include <stdio.h>
#include <string.h>

int compare(const char *str1, const char *str2)
{
	int i = 0;

	while(str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
		{
			return 0;
		}
		i++;
	}

	if (str1[i] != str2[i])
	{
		return 0;
	}

	return 1;
}

void my_del(char *str)
{
	str[strcspn(str, "\n")] = '\0';
}
int main()
{
	char arr[100];
	char arr1[100];


	printf("enter the first array : ");
	fgets(arr, sizeof(arr), stdin);

	my_del(arr);


	printf("enter the second array : ");
	fgets(arr1, sizeof(arr1), stdin);

	my_del(arr1);

	if (compare(arr, arr1))
	{
		printf("identique \n");
	} else {
		printf("not identique \n");
	}


	return 0;


}
