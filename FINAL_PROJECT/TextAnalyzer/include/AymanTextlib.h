#ifndef AYMAN_TEXTLIB_H
#define AYMAN_TEXTLIB_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TEXT 2000
#define MAX_WORDS 1000
#define MAX_WORD_LEN 50

// -------------------------
// Text cleaning & extraction
// -------------------------

// Cleans input text: removes punctuation, converts to lowercase
void cleanText(const char *input, char *output);

// Splits cleaned text into words
void splitWords(const char *input, char words[][MAX_WORD_LEN], int *count);

// Extracts words and counts occurrences (returns number of unique words)
int extractWords(char *text, char dictionary[][MAX_WORD_LEN], int counts[]);

// -------------------------
// Dictionary / word functions
// -------------------------

// Adds word to dictionary or increments count
void addWord(char word[], char dictionary[][MAX_WORD_LEN], int counts[], int *wordCount);

// Finds word index in dictionary (-1 if not found)
int findWord(char word[], char dictionary[][MAX_WORD_LEN], int wordCount);


int searchExact(const char *word, char dictionary[][MAX_WORD_LEN], int wordCount);


void searchPartial(const char *substr, char dictionary[][MAX_WORD_LEN], int counts[], int wordCount);


int isPalindrome(char word[]);


void findPalindromes(char words[][MAX_WORD_LEN], int count);


void wordCloud(char words[][MAX_WORD_LEN], int counts[], int wordCount);


void analyzeText(const char *input);

void sortAlpha(char dictionary[][MAX_WORD_LEN], int counts[], int wordCount);

#endif


