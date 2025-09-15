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
        int found = -1;
        for(int i=0; i<n; i++) if(strcmp(mots[i].mot, tok)==0) found = i;
        if(found == -1) {
            strcpy(mots[n].mot, tok);
            mots[n].occ = 1;
            n++;
        } else {
            mots[found].occ++;
        }
        tok = strtok(NULL, " ");
    }

    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(mots[i].occ < mots[j].occ) {
                struct Mot temp = mots[i];
                mots[i] = mots[j];
                mots[j] = temp;
            }
        }
    }

    for(int i=0; i<n; i++) printf("%s (%d)\n", mots[i].mot, mots[i].occ);
}

