#include <stdio.h>

#define NB_ETUDIANTS 5
#define TAILLE 50

int main() {
    char noms[NB_ETUDIANTS][TAILLE] = {
        "Dupont", "Martin", "Bernard", "Durand", "Petit"
    };

    char prenoms[NB_ETUDIANTS][TAILLE] = {
        "Marie", "Pierre", "Julie", "Lucas", "Emma"
    };

    char adresses[NB_ETUDIANTS][100] = {
        "20, Boulevard Niels Bohr, Lyon",
        "22, Rue Victor Hugo, Paris",
        "15, Avenue des Champs, Lille",
        "5, Rue Nationale, Marseille",
        "18, Place Bellecour, Lyon"
    };

    float note_prog[NB_ETUDIANTS] = {16.5, 14.0, 12.7, 17.2, 15.3};
    float note_sys[NB_ETUDIANTS] = {12.1, 14.1, 13.4, 15.6, 11.9};

    for (int i = 0; i < NB_ETUDIANTS; i++) {
        printf("Étudiant.e %d:\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation en C : %.1f\n", note_prog[i]);
        printf("Note Système d'exploitation : %.1f\n", note_sys[i]);
        printf("--------------------------\n");
    }

    return 0;
}
