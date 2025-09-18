#include <stdio.h>
#include <string.h>
#include "../include/AymanTextlib.h"
#include <stdbool.h>
int main()
{
    char input[MAX_TEXT];
    char dictionary[MAX_WORDS][MAX_WORD_LEN];
    int counts[MAX_WORDS];
    int wordCount = 0;

    while (true)
    {
        printf("\n-----------------------------\n");
        printf("TEXT ANALYZER MENU\n");
        printf("1. Enter text and analyze\n");
        printf("2. Show dictionary\n");
        printf("3. Exact search\n");
        printf("4. Partial search\n");
        printf("5. Quit\n");
        printf("Choose an option: ");

        int choice;
        scanf("%d", &choice);
        getchar(); 

        if (choice == 1)
        {
            printf("\nEnter your text (max 2000 chars):\n");
            fgets(input, sizeof(input), stdin);
            input[strcspn(input, "\n")] = 0; 

            analyzeText(input); 

            
            char cleaned[MAX_TEXT];
            cleanText(input, cleaned);
            wordCount = extractWords(cleaned, dictionary, counts);
        }
        else if (choice == 2)
        {
            printf("\n--- Dictionary ---\n");
            for (int i = 0; i < wordCount; i++)
                printf("%-15s : %d\n", dictionary[i], counts[i]);
        }
        else if (choice == 3)
        {
            char word[MAX_WORD_LEN];
            printf("Enter word to search: ");
            fgets(word, sizeof(word), stdin);
            word[strcspn(word, "\n")] = 0;

            int idx = searchExact(word, dictionary, wordCount);
            if (idx != -1)
                printf("Found '%s' (%d times)\n", dictionary[idx], counts[idx]);
            else
                printf("Word not found.\n");
        }
        else if (choice == 4)
        {
            char substr[MAX_WORD_LEN];
            printf("Enter substring to search: ");
            fgets(substr, sizeof(substr), stdin);
            substr[strcspn(substr, "\n")] = 0;

            searchPartial(substr, dictionary, counts, wordCount);
        }
        else if (choice == 5)
        {
            printf("Exiting program.\n");
            break;
        }
        else
        {
            printf("Invalid option, try again.\n");
        }
    }

    return 0;
}

