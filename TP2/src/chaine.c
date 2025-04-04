#include <stdio.h>

int main() {
    char s1[] = "Hello";
    char s2[] = " World!";
    char copy[50], concat[100];
    int i = 0, j = 0;

    // Longueur
    while (s1[i] != '\0') i++;
    printf("Longueur : %d\n", i);

    // Copie
    i = 0;
    while (s1[i] != '\0') {
        copy[i] = s1[i];
        i++;
    }
    copy[i] = '\0';
    printf("Copie : %s\n", copy);

    // Concaténation
    i = 0;
    while (s1[i] != '\0') {
        concat[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j] != '\0') {
        concat[i++] = s2[j++];
    }
    concat[i] = '\0';
    printf("Concaténation : %s\n", concat);

    return 0;
}
