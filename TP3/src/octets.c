#include <stdio.h>

void afficher_octets(void* ptr, size_t taille) {
    unsigned char* p = (unsigned char*)ptr;
    for (size_t i = 0; i < taille; i++) printf("%02x ", p[i]);
    printf("\n");
}

int main() {
    short s = 0x0302;
    int i = 0x04030201;
    long int l = 0x0807060504030201;
    float f = 2.5f;
    double d = 1.0;
    long double ld = 1.0;

    printf("Octets de short :\n"); afficher_octets(&s, sizeof(s));
    printf("Octets de int :\n"); afficher_octets(&i, sizeof(i));
    printf("Octets de long int :\n"); afficher_octets(&l, sizeof(l));
    printf("Octets de float :\n"); afficher_octets(&f, sizeof(f));
    printf("Octets de double :\n"); afficher_octets(&d, sizeof(d));
    printf("Octets de long double :\n"); afficher_octets(&ld, sizeof(ld));
    return 0;
}
