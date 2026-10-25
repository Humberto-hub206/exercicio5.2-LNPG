#include <stdio.h>

int main() {
    int v[10];

    for (int i = 0; i < 10; i++) {
        v[i] = i + 1;
    }

    printf("Vetor preenchido corretamente.\n");

    /* Acesso intencional fora dos limites do vetor */
    printf("Tentando acessar v[10]...\n");
    v[10] = 100;

    printf("Valor: %d\n", v[10]);

    return 0;
}
