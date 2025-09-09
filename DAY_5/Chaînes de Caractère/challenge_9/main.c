#include <stdio.h>
#include <string.h>

int main() 
{
    
	char or[100];
    	char result[100];
    
	int j = 0;

    	printf("Enter a string: ");
    	fgets(or, sizeof(or), stdin);

    
    	or[strcspn(or, "\n")] = '\0';

    	for (int i = 0; or[i] != '\0'; i++) 
	{
        
		if (or[i] != ' ') {
            	result[j] = or[i];
            	j++;
        }
    	}	

    	result[j] = '\0';  

    	printf("String without spaces: %s\n", result);

    	return 0;
}

