#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Mot {
    char mot[50];
    int occ;
};

int main() {
    char texte[] = "Le chat noir dort Le chien joue Le chat noir";
    char copie[200];
    strcpy(copie, texte);
    for(int i=0; copie[i]; i++) copie[i] = tolower(copie[i]);
    struct Mot mots[50];
    int n = 0;
    char *tok = strtok(copie, " ");
    while(tok) {
        int found = 0;
        for(int i=0; i<n; i++) {
            if(strcmp(mots[i].mot, tok) == 0) {
                mots[i].occ++;
                found = 1;
                break;
            }
        }
        if(!found) {
            strcpy(mots[n].mot, tok);
            mots[n].occ = 1;
            n++;
        }
        tok = strtok(NULL, " ");
    }
    for(int i=0; i<n; i++) printf("%s: %d\n", mots[i].mot, mots[i].occ);
}

