#include <stdio.h>

int comparer(const char *a, const char *b) {
    while (*a && *b && *a == *b) {
        a++;
        b++;
    }
    return (*a == '\0' && *b == '\0');
}

int main() {
    char *phrases[10] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    char saisie[100];
    printf("Entrez la phrase à chercher : ");
    fgets(saisie, sizeof(saisie), stdin);
    
    // Retirer le retour à la ligne
    for (int i = 0; saisie[i]; i++) {
        if (saisie[i] == '\n') saisie[i] = '\0';
    }

    int trouve = 0;
    for (int i = 0; i < 10; i++) {
        if (comparer(saisie, phrases[i])) {
            trouve = 1;
            break;
        }
    }

    printf(trouve ? "Phrase trouvée\n" : "Phrase non trouvée\n");
    return 0;
}
