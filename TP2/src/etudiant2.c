#include <stdio.h>
#include <string.h>

#define TAILLE 5

// Définition de la structure Étudiant
struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float noteProg;
    float noteSys;
};

int main() {
    struct Etudiant etudiants[TAILLE];

    // Saisie des informations pour 5 étudiant.e.s
    for (int i = 0; i < TAILLE; i++) {
        printf("Étudiant.e %d :\n", i + 1);

        printf("Nom : ");
        scanf(" %[^\n]", etudiants[i].nom);  // %[^\n] lit une ligne entière avec espaces

        printf("Prénom : ");
        scanf(" %[^\n]", etudiants[i].prenom);

        printf("Adresse : ");
        scanf(" %[^\n]", etudiants[i].adresse);

        printf("Note Programmation en C : ");
        scanf("%f", &etudiants[i].noteProg);

        printf("Note Système d'exploitation : ");
        scanf("%f", &etudiants[i].noteSys);

        printf("\n");
    }

    // Affichage des informations
    printf("\n--- Liste des étudiant.e.s ---\n\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prénom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note Programmation : %.2f\n", etudiants[i].noteProg);
        printf("Note Système : %.2f\n", etudiants[i].noteSys);
        printf("\n");
    }

    return 0;
}
