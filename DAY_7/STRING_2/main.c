#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Mot {
    char mot[50];
    int occ;
    int len;
    int pos[50];
    int posCount;
};

int main() {
    char texte[] = "Le chat noir dort Le chien joue Le chat noir";
    char copie[200];
    strcpy(copie, texte);
    for(int i=0; copie[i]; i++) copie[i] = tolower(copie[i]);

    struct Mot mots[50];
    int n=0, idx=0;
    char *tok = strtok(copie, " ");
    while(tok) {
        int found = -1;
        for(int i=0; i<n; i++) if(strcmp(mots[i].mot, tok)==0) found = i;
        if(found == -1) {
            strcpy(mots[n].mot, tok);
            mots[n].occ = 1;
            mots[n].len = strlen(tok);
            mots[n].pos[0] = idx;
            mots[n].posCount = 1;
            n++;
        } else {
            mots[found].occ++;
            mots[found].pos[mots[found].posCount++] = idx;
        }
        idx++;
        tok = strtok(NULL, " ");
    }

    char cherche[] = "ch";
    for(int i=0; i<n; i++) {
        if(strstr(mots[i].mot, cherche)) {
            printf("%s -> longueur:%d, occurrences:%d, positions:[", mots[i].mot, mots[i].len, mots[i].occ);
            for(int j=0; j<mots[i].posCount; j++) {
                printf("%d", mots[i].pos[j]);
                if(j<mots[i].posCount-1) printf(",");
            }
            printf("]\n");
        }
    }
}

