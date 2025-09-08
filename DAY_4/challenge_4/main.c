#include <stdio.h>
int main(){
    	int size, max;
    	
	printf("enter the size of the table : ");
    	scanf("%d",&size);
    
	int table[size];
    
	printf("enter element 1 :\n");
        scanf("%d",&table[0]);
        
	max = table[0];
        
	for (int i = 1; i < size; i++)
        {
      		printf("donner the element %d :\n",i+1);
      		scanf("%d",&table[i]);
      
		if (max < table[i])
      		{
        		max = table[i];
      		}

    	}
    	
	printf("the biggest element : %d\n",max);


    return 0;
}
