#include <stdio.h>

int main()
{
        unsigned int num;

        printf("please enter a number : ");
        scanf("%u", &num);

        int i = 1;

        int even = 1;

        while (i <= num)
        {
                even = 2 * i;
                printf("%d, ", even);
                i++;
        }

        puts("\n");

        return 0;
}
