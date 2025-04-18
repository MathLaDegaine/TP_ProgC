#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];
    srand(time(NULL));
    int max = 0, min = 1000;

    for (int i = 0; i < 100; i++) {
        tab[i] = rand() % 1000 + 1;
        if (tab[i] > max) max = tab[i];
        if (tab[i] < min) min = tab[i];
    }

    printf("Le numero le plus grand est : %d\n", max);
    printf("Le numero le plus petit est : %d\n", min);
    return 0;
}
