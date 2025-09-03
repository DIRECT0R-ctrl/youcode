#include <stdio.h>

int main ()
{
	int base,i,Ex,result;
    	
	printf("please enter a base number : ");
    	scanf("%d",&base);
    
	printf("please enter a Exponent : ") ;
    	scanf ("%d",&Ex) ;
    
	i = 1;
    	result = 1;
    	
	while (i <= Ex)
    	{
       		result *= base;
       		i++;
    	}
    	
	printf ("%d\n",result) ;

	return 0;
 }
