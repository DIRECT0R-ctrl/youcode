#include <stdio.h>
#include <string.h>
#include <ctype.h>

int my_count(char *str)
{	
	int count = 0;
	int in_word = 0;

	for (int i = 0; str[i] != '\0'; i++) 
	{
        	if (!isspace((unsigned char)str[i])) {
            		
			if (!in_word) 
			{ 
                		count++;
                		in_word = 1;
            		}
        } else {	
            in_word = 0; 
        }
    }

	return count;
}
int main()
{
	printf("\n-----------affichage------------\n\n");
	
	char arr[100] ;
	printf("please enter a string : ");
	fgets(arr, sizeof(arr), stdin);

	arr[strcspn(arr, "\n")] = 0;


	printf("[string : %s ] [ count : %d]", arr, my_count(arr));

	printf("\n\n--------------------------------\n\n");
}
