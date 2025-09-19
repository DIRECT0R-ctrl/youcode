#include <stdio.h>
#include <string.h>
#include "../include/AymanTextlib.h"


int searchExact(const char *word, char dictionary[][MAX_WORD_LEN], int wordCount)
{
    for (int i = 0; i < wordCount; i++)
    {
        if (strcmp(dictionary[i], word) == 0) return i;
    }
    return -1;
}


void searchPartial(const char *substr, char dictionary[][MAX_WORD_LEN], int counts[], int wordCount)
{
    int found = 0;
    printf("\nPartial matches for '%s':\n", substr);

    for (int i = 0; i < wordCount; i++)
    {
        if (strstr(dictionary[i], substr))
        {
            printf("%-15s : %d\n", dictionary[i], counts[i]);
            found = 1;
        }
    }

    if (!found)
        printf("No match found.\n");
}

