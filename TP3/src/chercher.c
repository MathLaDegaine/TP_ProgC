#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];
    srand(time(NULL));

    for (int i = 0; i < 100; i++) tab[i] = rand() % 200 - 100;

    printf("Tableau :\n");
    for (int i = 0; i < 100; i++) printf("%d ", tab[i]);
    printf("\n\nEntrez l'entier à chercher : ");

    int cible, trouve = 0;
    scanf("%d", &cible);

    for (int i = 0; i < 100; i++) {
        if (tab[i] == cible) {
            trouve = 1;
            break;
        }
    }
    printf(trouve ? "entier présent\n" : "entier absent\n");
    return 0;
}
