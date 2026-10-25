#include <stdio.h>

int main() {
    int v[5];
    int maior;
    int soma = 0;
    double media;

    printf("Digite 5 inteiros: ");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
    }

    maior = v[0];

    for (int i = 0; i < 5; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }

        soma += v[i];
    }

    media = soma / 5.0;

    printf("Maior: %d\n", maior);
    printf("Media: %.2f\n", media);

    return 0;
}
