#include <stdio.h>
#include <math.h>

int main(){
    
	int n;
    
	printf("please enter a number : ");
    	scanf("%d",&n);
    
	for (int i = 1; i <= sqrt(n); i++)
    	{
        	if (n % i == 0)
        	{
           		printf("%d ",i);
        	}
        
    	}
    
	printf("\n");
    	
	for (int i = 1; i <=n ; i++)
    	{
        	if (n % i == 0)
        	{
           	printf("%d ",i);
        	}
        
    	}

	puts("\n");
    	return 0;
}
