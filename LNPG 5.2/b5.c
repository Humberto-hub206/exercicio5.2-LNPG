#include <stdio.h>

int main() {
    int v[4] = {10, 20, 30, 40};
    double d[4] = {1.1, 2.2, 3.3, 4.4};

    printf("Enderecos do vetor int:\n");

    for (int i = 0; i < 4; i++) {
        printf("v[%d]: %p\n", i, (void *)&v[i]);
    }

    printf("\nEnderecos do vetor double:\n");

    for (int i = 0; i < 4; i++) {
        printf("d[%d]: %p\n", i, (void *)&d[i]);
    }

    return 0;
}
