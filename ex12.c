#include <stdio.h>
#include <stdlib.h>

int main() {
    float vetor[5];
    float maior, menor, soma = 0, media;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o %do valor: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (i = 0; i < 5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
        soma = soma + vetor[i];
    }

    media = soma / 5;

    printf("\nValores lidos:\n");
    for (i = 0; i < 5; i++) {
        printf("%.2f\n", vetor[i]);
    }

    printf("\nMaior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Media: %.2f\n", media);

    system("pause");
    return 0;
}
