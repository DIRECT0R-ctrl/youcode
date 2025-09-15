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

    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(strcmp(mots[i], mots[j]) > 0) {
                char *temp = mots[i];
                mots[i] = mots[j];
                mots[j] = temp;
            }
        }
    }

    for(int i=0; i<n; i++) printf("%s\n", mots[i]);
}

