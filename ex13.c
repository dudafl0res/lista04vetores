#include <stdio.h>
#include <stdlib.h>

int main() {
    float vetor[5];
    int i, posMaior = 0, posMenor = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite o %do valor: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    for (i = 1; i < 5; i++) {
        if (vetor[i] > vetor[posMaior]) {
            posMaior = i;
        }
        if (vetor[i] < vetor[posMenor]) {
            posMenor = i;
        }
    }

    printf("\nMaior valor (%.2f) esta na posicao %d\n", vetor[posMaior], posMaior);
    printf("Menor valor (%.2f) esta na posicao %d\n", vetor[posMenor], posMenor);

    system("pause");
    return 0;
}
