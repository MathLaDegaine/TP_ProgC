#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];
    srand(time(NULL));

    for (int i = 0; i < 100; i++) tab[i] = i * 2;

    printf("Tableau trié :\n");
    for (int i = 0; i < 100; i++) printf("%d ", tab[i]);
    printf("\n\nEntrez l'entier à chercher : ");

    int cible;
    scanf("%d", &cible);
    int g = 0, d = 99, trouve = 0;

    while (g <= d) {
        int m = (g + d) / 2;
        if (tab[m] == cible) {
            trouve = 1;
            break;
        } else if (tab[m] < cible) {
            g = m + 1;
        } else {
            d = m - 1;
        }
    }
    printf(trouve ? "entier présent\n" : "entier absent\n");
    return 0;
}
