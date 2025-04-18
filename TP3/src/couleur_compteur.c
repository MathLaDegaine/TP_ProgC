#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    unsigned char r, g, b, a;
} Couleur;

typedef struct {
    Couleur couleur;
    int count;
} CouleurComptee;

int couleurs_egales(Couleur c1, Couleur c2) {
    return c1.r == c2.r && c1.g == c2.g && c1.b == c2.b && c1.a == c2.a;
}

int main() {
    Couleur tab[100];
    CouleurComptee uniques[100];
    int total = 0;
    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        tab[i].r = rand() % 256;
        tab[i].g = rand() % 256;
        tab[i].b = rand() % 256;
        tab[i].a = 255;
    }

    for (int i = 0; i < 100; i++) {
        int j;
        for (j = 0; j < total; j++) {
            if (couleurs_egales(tab[i], uniques[j].couleur)) {
                uniques[j].count++;
                break;
            }
        }
        if (j == total) {
            uniques[total].couleur = tab[i];
            uniques[total].count = 1;
            total++;
        }
    }

    for (int i = 0; i < total; i++) {
        printf("%02x %02x %02x %02x : %d\n",
            uniques[i].couleur.r,
            uniques[i].couleur.g,
            uniques[i].couleur.b,
            uniques[i].couleur.a,
            uniques[i].count);
    }
    return 0;
}
