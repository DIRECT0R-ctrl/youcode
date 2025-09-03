#include <stdio.h>

int main()
{
	char name[50], last_name[50], prenom[50], gender[20], email[100];

	int age = 0;

	printf("please enter your name and you last name ! :\n");
	scanf("%s", name);
	
	printf("please enter your last name ! : \n");
	scanf("%s", last_name);

	printf("Please enter your age ! :\n");
	scanf("%d", &age);

	printf("please enter your gender ! :\n");
	scanf("%s", gender);
	
	printf("please enter your email address\n");
	scanf("%s", email);
	
	printf("%s,%s, %d, %s, %s,\n", name, last_name, age, gender, email);
	return 0;
} 
