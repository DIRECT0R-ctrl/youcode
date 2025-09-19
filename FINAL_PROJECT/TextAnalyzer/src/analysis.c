#include <stdio.h>
#include <string.h>
#include "../include/AymanTextlib.h"

void analyzeText(const char *input)
{
    char cleaned[MAX_TEXT];
    char words[MAX_WORDS][MAX_WORD_LEN];
    int counts[MAX_WORDS];
    int wordCount = 0;

    
    cleanText(input, cleaned);
    printf("\n--- Cleaned Text ---\n%s\n", cleaned);

    
    wordCount = extractWords(cleaned, words, counts);

    printf("\n-- Dictionary with counts --\n");
    for(int i = 0; i < wordCount; i++)
	    printf("%-15s : %d\n", words[i], counts[i]);

    
    printf("\n--- Word Cloud ---\n");
    wordCloud(words, counts, wordCount);

    
    printf("\n--- Palindromes ---\n");
    findPalindromes(words, wordCount);
}

