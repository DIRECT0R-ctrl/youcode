#include <stdio.h>
#include <string.h>
#include "../include/AymanTextlib.h"

void analyzeText(const char *input)
{
    char cleaned[MAX_TEXT];
    char words[MAX_WORDS][MAX_WORD_LEN];
    int counts[MAX_WORDS];
    int wordCount = 0;

    // 1️ Clean the text
    cleanText(input, cleaned);
    printf("\n--- Cleaned Text ---\n%s\n", cleaned);

    // 2️ Extract words and counts
    wordCount = extractWords(cleaned, words, counts);

    printf("\n-- Dictionary with counts --\n");
    for(int i = 0; i < wordCount; i++)
	    printf("%-15s : %d\n", words[i], counts[i]);

    // 4️ Word cloud
    printf("\n--- Word Cloud ---\n");
    wordCloud(words, counts, wordCount);

    // 5️ Palindromes
    printf("\n--- Palindromes ---\n");
    findPalindromes(words, wordCount);
}

