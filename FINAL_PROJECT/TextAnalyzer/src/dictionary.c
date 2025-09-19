#include <stdio.h>
#include <string.h>
#include "../include/AymanTextlib.h"


void addWord(char word[], char dictionary[][MAX_WORD_LEN], int counts[], int *wordCount) 
{
    if (*wordCount >= MAX_WORDS) return; // Safety check

    int idx = findWord(word, dictionary, *wordCount);

    if (idx != -1) 
    {
        counts[idx]++;
    } 
    else 
    {
        strcpy(dictionary[*wordCount], word);
        counts[*wordCount] = 1;
        (*wordCount)++;
    }
}


int findWord(char word[], char dictionary[][MAX_WORD_LEN], int wordCount) 
{
    for (int i = 0; i < wordCount; i++) 
    {
        if (strcmp(dictionary[i], word) == 0) return i;
    }
    return -1;
}

void sortAlpha(char dictionary[][MAX_WORD_LEN], int counts[], int wordCount)
{
	char tempWord[MAX_WORD_LEN];
	int tempCount;

	int i = 0;
	while(i < wordCount - 1)
	{
		int j = i + 1;
		while(j < wordCount)
		{
			if (strcmp(dictionary[i], dictionary[j]) > 0)
			{
				strcpy(tempWord, dictionary[i]);
				strcpy(dictionary[i], dictionary[j]);
				strcpy(dictionary[j], tempWord);


				tempCount = counts[i];
				counts[i] = counts[j];
				counts[j] = tempCount;
			}
			j++;
		}
		i++;
	}
}
