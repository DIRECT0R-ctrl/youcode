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

// -------------------------
// Search functions
// -------------------------

// Search for exact word, returns index or -1
int searchExact(const char *word, char dictionary[][MAX_WORD_LEN], int wordCount);

// Search for partial word, prints all matches
void searchPartial(const char *substr, char dictionary[][MAX_WORD_LEN], int counts[], int wordCount);

// -------------------------
// Analysis functions
// -------------------------

// Checks if a word is palindrome (returns 1 if yes)
int isPalindrome(char word[]);

// Finds and prints palindromes in words array
void findPalindromes(char words[][MAX_WORD_LEN], int count);

// Prints word cloud using stars for frequency
void wordCloud(char words[][MAX_WORD_LEN], int counts[], int wordCount);

// Central function: analyzes text completely
void analyzeText(const char *input);

#endif


