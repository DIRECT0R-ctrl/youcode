#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../include/AymanTextlib.h"


int isPalindrome(char *word) 
{
    int left = 0;
    int right = strlen(word) - 1;

    while (left < right) 
    {
        if (word[left] != word[right]) return 0;
        left++;
        right--;
    }

    return 1;
}


void findPalindromes(char words[][MAX_WORD_LEN], int count) 
{
    int found = 0;
    for (int i = 0; i < count; i++) 
    {
        if (isPalindrome(words[i]) && strlen(words[i]) > 1)         
	{
            printf("%s\n", words[i]);
            found = 1;
        }
    }

    if (!found) printf("No palindromes found.\n");
}


