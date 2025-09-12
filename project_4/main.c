#include <stdio.h>
#include <string.h>

#define MAX_ETUDIANTS 100
#define MAX_COURS 50

struct Etudiant {
    int id;
    char nom[50];
    char prenom[50];
    int age;
    float moyenne;
};

struct Cours {
    
	int code;
    
	char nom[50];
    
	int credits;
    
	float note;
};

struct Etudiant etudiants[MAX_ETUDIANTS];
struct Cours cours[MAX_COURS];
int nbEtudiants = 0;
int nbCours = 0;

void ajouterEtudiant() 
{
    if (nbEtudiants < MAX_ETUDIANTS) 
    {
        struct Etudiant e;
        printf("ID: ");
        scanf("%d", &e.id);
        printf("Nom: ");
        
	fgets(e.nom, sizeof(e.nom), stdin);
	e.nom[strcspn(e.nom, "\n")] = 0;
	
	getchar();

        printf("Prenom: ");
        fgets(e.prenom, sizeof(e.prenom), stdin);
	
	e.prenom[strcspn(e.prenom, "\n")] = 0;

	getchar();

        printf("Age: ");
        scanf("%d", &e.age);
        printf("Moyenne: ");
        scanf("%f", &e.moyenne);
        etudiants[nbEtudiants++] = e;
    }
}

void ajouterCours() {
    if (nbCours < MAX_COURS) {
        struct Cours c;
        printf("Code: ");
        scanf("%d", &c.code);
        printf("Nom: ");
        
	fgets(c.nom. sizeof(c.nom), stdin);
	c.nom[strcspn(c.nom, "\n")] == 0;
	getchar();
	
	printf("Credits: ");
        scanf("%d", &c.credits);
        printf("Note: ");
        scanf("%f", &c.note);
        cours[nbCours++] = c;
    }
}

void afficherEtudiants() {
    for (int i = 0; i < nbEtudiants; i++) {
        printf("%d %s %s %d %.2f\n", etudiants[i].id, etudiants[i].nom, etudiants[i].prenom, etudiants[i].age, etudiants[i].moyenne);
    }
}

void afficherCours() {
    for (int i = 0; i < nbCours; i++) {
        printf("%d %s %d %.2f\n", cours[i].code, cours[i].nom, cours[i].credits, cours[i].note);
    }
}

void rechercherEtudiant() {
    int id;
    printf("ID: ");
    scanf("%d", &id);
    for (int i = 0; i < nbEtudiants; i++) {
        if (etudiants[i].id == id) {
            printf("%d %s %s %d %.2f\n", etudiants[i].id, etudiants[i].nom, etudiants[i].prenom, etudiants[i].age, etudiants[i].moyenne);
            return;
        }
    }
    printf("Non trouve\n");
}

void modifierNoteCours() {
    int code;
    float note;
    printf("Code du cours: ");
    scanf("%d", &code);
    for (int i = 0; i < nbCours; i++) {
        if (cours[i].code == code) {
            printf("Nouvelle note: ");
            scanf("%f", &note);
            cours[i].note = note;
            return;
        }
    }
    printf("Non trouve\n");
}

int main() {
    int choix;
    do {
        printf("1. Ajouter etudiant\n");
        printf("2. Ajouter cours\n");
        printf("3. Afficher etudiants\n");
        printf("4. Afficher cours\n");
        printf("5. Rechercher etudiant\n");
        printf("6. Modifier note cours\n");
        printf("0. Quitter\n");
        scanf("%d", &choix);
        switch (choix) {
            case 1: ajouterEtudiant(); break;
            case 2: ajouterCours(); break;
            case 3: afficherEtudiants(); break;
            case 4: afficherCours(); break;
            case 5: rechercherEtudiant(); break;
            case 6: modifierNoteCours(); break;
        }
    } while (choix != 0);
    return 0;
}

