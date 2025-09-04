#include <stdio.h>

int main()
{

	int n,inverse,rev=0;
    	printf(" please enter a number : ");
    	scanf("%d",&n);

    	while (n>0)
    	{
        	inverse = n % 10;
        	rev = rev * 10 + inverse;
        	n = n / 10;
        
    	}
    	
	printf("reversed  : %d\n",rev);

}
