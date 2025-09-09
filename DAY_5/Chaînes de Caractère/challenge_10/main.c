#include <stdio.h>
#include <string.h>

void my_remove(char *str) 
{
    str[strcspn(str, "\n")] = '\0';
}

int my_search(const char *text, const char *pattern) 
{
    
	int i = 0, j, len_text = strlen(text), len_pattern = strlen(pattern);
    	for (; i <= len_text - len_pattern; i++) 
	{
        	j = 0;
        	
		while (j < len_pattern && text[i + j] == pattern[j]) 
		{
            		j++;
        	}
        	
		if (j == len_pattern) return 1;
    	}
    	
	return 0;
}

int main() {
    
	char a[100];
    	char b[50];

    	printf("main string: ");
    	fgets(a, sizeof(a), stdin);
    
	my_remove(a);

    	printf("sub string: ");
    	fgets(b, sizeof(b), stdin);
    	
	my_remove(b);

    	
	if (my_search(a, b)) 
	{
        	printf("manual: yes\n");
    	
	} else {

        	printf("manual: no\n");
    	}

    	if (strstr(a, b)) 
	{
        	printf("strstr: yes\n");
    
	} else {
        	
		printf("strstr: no\n");
    }

    return 0;
}

