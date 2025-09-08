#include <stdio.h>
int main(){
     
	int size,min;
    
	printf("enter the size of the table : ");
    
	scanf("%d",&size);
        
	int table[size];
    
	printf("enter the element 1 : ");
        scanf("%d",&table[0]);
      
	min = table[0];
        
	for (int i = 1; i < size; i++)
        {
      		printf("enter element %d : ",i+1);
      		scanf("%d",&table[i]);
      
		if (min > table[i])
      		{
       		 	min = table[i];
      		}

    	}
    	
	printf("the smallest element is : %d\n",min);


    return 0;
}
