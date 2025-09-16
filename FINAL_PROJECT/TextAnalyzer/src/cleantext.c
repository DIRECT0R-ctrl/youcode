#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../include/AymanTextlib.h"

// Clean text: remove punctuation, convert to lowercase
void cleanText(const char *input, char *output)
{
    int j = 0;
    for (int i = 0; input[i] != '\0' && j < MAX_TEXT - 1; i++)
    {
        if (isalpha((unsigned char)input[i]) || input[i] == ' ')
        {
            output[j++] = tolower((unsigned char)input[i]);
        }
        else if (input[i] == '\n' || input[i] == '\t')
        {
            output[j++] = ' ';
        }
        // ignore all other punctuation
    }
    output[j] = '\0';
}

