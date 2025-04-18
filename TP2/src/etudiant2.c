#include <stdio.h>
#include <string.h>

#define TAILLE 5

// Structure pour stocker les informations d'un.e étudiant.e
struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float noteProg;
    float noteSys;
    float moyenne;
};

int main() {
    struct Etudiant etudiants[TAILLE];

    // Saisie des informations
    for (int i = 0; i < TAILLE; i++) {
        printf("Étudiant.e %d :\n", i + 1);

        printf("Nom : ");
        scanf(" %[^\n]", etudiants[i].nom);

        printf("Prénom : ");
        scanf(" %[^\n]", etudiants[i].prenom);

        printf("Adresse : ");
        scanf(" %[^\n]", etudiants[i].adresse);

        printf("Note Programmation en C : ");
        scanf("%f", &etudiants[i].noteProg);

        printf("Note Système d'exploitation : ");
        scanf("%f", &etudiants[i].noteSys);

        // Calcul de la moyenne
        etudiants[i].moyenne = (etudiants[i].noteProg + etudiants[i].noteSys) / 2;

        printf("\n");
    }

    // Affichage des données
    printf("\n--- Liste des étudiant.e.s ---\n\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom      : %s\n", etudiants[i].nom);
        printf("Prénom   : %s\n", etudiants[i].prenom);
        printf("Adresse  : %s\n", etudiants[i].adresse);
        printf("Note Prog : %.2f\n", etudiants[i].noteProg);
        printf("Note Sys  : %.2f\n", etudiants[i].noteSys);
        printf("Moyenne   : %.2f\n", etudiants[i].moyenne);
        printf("-----------------------------\n");
    }

    return 0;
}
