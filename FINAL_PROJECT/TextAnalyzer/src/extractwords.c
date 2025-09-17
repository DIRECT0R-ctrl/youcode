#include <string.h>
#include <ctype.h>
#include "../include/AymanTextlib.h"

// Extract words from cleaned text and count occurrences
int extractWords(char *text, char dictionary[][MAX_WORD_LEN], int counts[]) 
{
    int wordCount = 0;
    char *token = strtok(text, " ");

    while (token != NULL) 
    {
        // Convert token to lowercase
        for (int i = 0; token[i]; i++) token[i] = tolower((unsigned char)token[i]);

        // Add word to dictionary (or increment count)
        addWord(token, dictionary, counts, &wordCount);

        token = strtok(NULL, " ");
        if (wordCount >= MAX_WORDS) break; // safety
    }

    return wordCount;
}
