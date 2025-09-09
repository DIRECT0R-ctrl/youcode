#include <stdio.h>

int main(){
    
	int size, result = 0;
    
	printf("enter the size of the table : ");
    	scanf("%d",&size);

    	int table[size];

    	for (int i = 0; i < size; i++)
    	{
      		printf("please enter the element %d : ",i+1);
      		scanf("%d",&table[i]);
      		result = result + table[i];

    	}
    	
	for ( int i = 0; i < size; i++)
    	{
        	printf("table[%d] :%d\n",i+1,table[i]);
    	}
    	
	printf("result of the elements : %d", result);

    	return 0;
}
