#include <stdio.h>
int main (){
    int fac, size;
    printf("enter the size of the table : ");
    scanf("%d",&size);
    int table[size];

    for (int i = 0; i < size; i++)
    {
      printf("enter element %d:\n",i+1);
      scanf("%d",&table[i]);
    }
    printf("enter the factor : ");
	scanf("%d",&fac);


      int tab_fac[size];
      for (int i = 0; i < size; i++)
    {
     tab_fac[i]=table[i]*fac;
    }
    for (int i = 0; i < size; i++)
    {
        printf("the original element :%d factor %d result: %d\n",table[i],fac,tab_fac[i]);
    }

    return 0;
}
