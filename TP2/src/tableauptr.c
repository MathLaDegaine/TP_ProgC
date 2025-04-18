#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11

int main() {
    int tab_int[TAILLE];
    float tab_float[TAILLE];

    srand(time(NULL));

    int *p_int = tab_int;
    float *p_float = tab_float;

    for (int i = 0; i < TAILLE; i++) {
        *(p_int + i) = rand() % 100;
        *(p_float + i) = (rand() % 1000) / 100.0f;
    }

    printf("Tableau d'entiers (avant) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(p_int + i));
    }

    printf("\nTableau de flottants (avant) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(p_float + i));
    }

    for (int i = 0; i < TAILLE; i++) {
        if (i % 2 == 0) {
            *(p_int + i) *= 3;
            *(p_float + i) *= 3;
        }
    }

    printf("\nTableau d'entiers (après) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(p_int + i));
    }

    printf("\nTableau de flottants (après) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(p_float + i));
    }

}
