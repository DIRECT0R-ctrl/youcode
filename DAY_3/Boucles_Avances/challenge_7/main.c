#include <stdio.h>

int main() {
	
	int n, term1 = 0, term2 = 1, next = 0;

    	printf("Enter the number of terms : ");
    	scanf("%d", &n);

    	printf("Fibonacci Series : %d, %d, ", term1, term2);

    
    	for (int i = 3; i <= n; ++i) 
	{
        	
		next = term1 + term2;
        	printf("%d, ", next);
        
		term1 = term2;
        	term2 = next;
    	}
	puts("\n");

	return 0;
}   
