#include <stdio.h>
#include "../include/AymanTextlib.h"


void wordCloud(char dictionary[][MAX_WORD_LEN], int counts[], int wordCount) 
{
    printf("\nWord Cloud:\n");

    for (int i = 0; i < wordCount; i++) 
    {
        printf("%-15s : ", dictionary[i]);

        int stars = counts[i];
        if (stars > 50) stars = 50; 

        for (int j = 0; j < stars; j++) 
        {
            putchar('*');
        }
        printf(" (%d)\n", counts[i]);
    }
}

