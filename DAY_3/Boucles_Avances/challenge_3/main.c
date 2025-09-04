#include <stdio.h>
#include <math.h>

int isPrime(int n) 
{
	if (n < 2) return 0; 
    	if (n == 2) return 1; 
    	if (n % 2 == 0) return 0; 
    
	for (int i = 3; i <= sqrt(n); i += 2) 
	{
        	if (n % i == 0) return 0;  
    	}
    return 1; 
}
int main() {
	
	int n;
    	
	printf("please enter a value : ");
    	scanf("%d", &n);

    	printf("the prime numbers from 1 to %d is :\n", n);
    	
	for (int i = 1; i <= n; i++) {
        
		if (isPrime(i)) {
            printf("%d ", i);
        }
    	}

    	printf("\n");
    	return 0;
}
