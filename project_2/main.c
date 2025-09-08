#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_ERRORS 6

int main() {
    char word[] = "PROGRAMMATION";  
    int length = strlen(word);
    char guessed[length + 1];       
    int errors = 0;
    int found = 0;

    
    for (int i = 0; i < length; i++) {
        guessed[i] = '_';
    }
    guessed[length] = '\0';

    printf("Bienvenue au jeu de Devinette !\n");
    printf("Vous avez %d tentatives pour deviner le mot.\n\n", MAX_ERRORS);

    while (errors < MAX_ERRORS && found < length) {
        char guess;
        int correct = 0;

        printf("Mot: %s\n", guessed);
        printf("Entrez une lettre : ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        
        for (int i = 0; i < length; i++) {
            if (word[i] == guess && guessed[i] == '_') {
                guessed[i] = guess;
                found++;
                correct = 1;
            }
        }

        if (correct) {
            printf("Bien joue !\n\n");
        } else {
            errors++;
            printf("Mauvaise lettre ! Tentatives restantes : %d\n\n", MAX_ERRORS - errors);
        }
    }

    if (found == length) {
        printf("Felicitations ! Vous avez devine le mot : %s\n", word);
    } else {
        printf("Game Over ! Le mot etait : %s\n", word);

	printf("\n~Aymane Laksimi , thank you for using the game .\n");
    }

    return 0;
}

