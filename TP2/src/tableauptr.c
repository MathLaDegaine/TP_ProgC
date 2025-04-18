#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11  // Taille des tableaux

int main() {
    int tab_int[TAILLE];
    float tab_float[TAILLE];

    int *p_int = tab_int;
    float *p_float = tab_float;

    // Initialisation de la graine aléatoire
    srand(time(NULL));

    // Remplir les tableaux avec des valeurs aléatoires
    for (int i = 0; i < TAILLE; i++) {
        *(p_int + i) = rand() % 100 + 1;           // entre 1 et 100
        *(p_float + i) = (rand() % 1000) / 100.0f; // entre 0.00 et 9.99
    }

    // Affichage avant multiplication
    printf("Tableau d'entiers (avant) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(p_int + i));
    }
    printf("\n");

    printf("Tableau de float (avant) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(p_float + i));
    }
    printf("\n");

    // Multiplication par 3 des éléments dont l'indice est divisible par 2
    for (int i = 0; i < TAILLE; i++) {
        if (i % 2 == 0) {
            *(p_int + i) *= 3;
            *(p_float + i) *= 3.0f;
        }
    }

    // Affichage après manipulation
    printf("\nTableau d'entiers (après) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(p_int + i));
    }
    printf("\n");

    printf("Tableau de float (après) :\n");
