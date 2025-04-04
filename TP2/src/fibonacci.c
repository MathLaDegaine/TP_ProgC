#include <stdio.h>

int main() {
    int n = 7;
    int a = 0, b = 1;

    for (int i = 0; i <= n; i++) {
        printf("%d", a);
        if (i != n) printf(", ");

        b = a + b;
        a = b - a;
    }

    printf("\n");
    return 0;
}
