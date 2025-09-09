#include <stdio.h>

int main(){
    int size;
    printf("please enter the size of the table : ");
    scanf("%d",&size);

    int table[size];
    for (int i = 0; i < size; i++)
    {
      printf("please enter the element %d : ",i+1);
      scanf("%d",&table[i]);

    }
    for ( int i = 0; i < size; i++)
    {
        printf("table[%d] : %d\n",i+1,table[i]);
    }


    return 0;
}
