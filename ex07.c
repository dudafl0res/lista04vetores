#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[10];
    int i, maior, posicao;

    for (i = 0; i < 10; i++) {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    posicao = 0;

    for (i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    printf("\nVetor:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", vetor[i]);
    }

    printf("\nMaior elemento: %d\n", maior);
    printf("Posicao do maior: %d\n", posicao);

    system("pause");
    return 0;
}
