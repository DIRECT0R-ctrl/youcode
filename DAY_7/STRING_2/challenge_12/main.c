#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char texte[] = "Le chat noir dort Le chien joue Le chat noir";
    char copie[200];
    strcpy(copie, texte);
    for(int i=0; copie[i]; i++) copie[i] = tolower(copie[i]);

    char *mots[50];
    int n = 0;
    char *tok = strtok(copie, " ");
    while(tok) {
        int found = 0;
        for(int i=0; i<n; i++) if(strcmp(mots[i], tok)==0) found = 1;
        if(!found) mots[n++] = tok;
        tok = strtok(NULL, " ");
    }

    int somme = 0;
    for(int i=0; i<n; i++) somme += strlen(mots[i]);

    double moyenne = (double)somme / n;
    printf("Longueur moyenne des mots uniques : %.2f\n", moyenne);
}

