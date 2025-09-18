#include <stdio.h>
#include <string.h>
#include "../include/AymanTextlib.h"

// Add a word to the dictionary or increment its count
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

// Find a word in the dictionary, return index or -1
int findWord(char word[], char dictionary[][MAX_WORD_LEN], int wordCount) 
{
    for (int i = 0; i < wordCount; i++) 
    {
        if (strcmp(dictionary[i], word) == 0) return i;
    }
    return -1;
}

