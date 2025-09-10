#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LEN 256


	const char *positive_keywords[] = {"happy", "good", "love"};
	const char *positive_responses[] = {"Great to hear that!","Awesome!","That's nice!"};

	const char *negative_keywords[] = {"sad", "bad", "angry"};
	const char *negative_responses[] = {"I'm sorry to hear that.","Hope things get better.","Stay strong!"};

	const char *neutral_keywords[] = {"hello", "help", "chatbot"};
	const char *neutral_responses[] = {"Hi there!","How can I help you?","Yes, I'm a chatbot!"};


int contains_keyword(const char *input, const char *keywords[], int num_keywords) 
{
    	for (int i = 0; i < num_keywords; i++) 
	{
        	if (strstr(input, keywords[i]) != NULL) 
		{
            	return i;
        	}
    	}
    return -1;
}

int main() {
    
	char input[MAX_LEN];
    
	srand(time(NULL));

	printf("Chatbot: Hello : Type exit to quit.\n");

    	while (1) 
    	{
        	printf("You: ");
        	fgets(input, MAX_LEN, stdin);
        	input[strcspn(input, "\n")] = 0;

        	if (strcmp(input, "exit") == 0) {
            	printf("Chatbot: Goodbye!\n");
            	break;
        }

        int index = contains_keyword(input, positive_keywords, sizeof(positive_keywords)/sizeof(positive_keywords[0]));
        if (index != -1) {
            int response_index = rand() % (sizeof(positive_responses)/sizeof(positive_responses[0]));
            printf("Chatbot: %s\n", positive_responses[response_index]);
            continue;
        }

        index = contains_keyword(input, negative_keywords, sizeof(negative_keywords)/sizeof(negative_keywords[0]));
        if (index != -1) {
            int response_index = rand() % (sizeof(negative_responses)/sizeof(negative_responses[0]));
            printf("Chatbot: %s\n", negative_responses[response_index]);
            continue;
        }

        index = contains_keyword(input, neutral_keywords, sizeof(neutral_keywords)/sizeof(neutral_keywords[0]));
        if (index != -1) {
            int response_index = rand() % (sizeof(neutral_responses)/sizeof(neutral_responses[0]));
            printf("Chatbot: %s\n", neutral_responses[response_index]);
            continue;
        }

        printf("Chatbot: m not smart as you thing hhhh rewrite something .\n");
    }
    return 0;
}
 

        	
