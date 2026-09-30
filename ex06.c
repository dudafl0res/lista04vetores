#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[10];
    int i, maior, menor;

    for (i = 0; i < 10; i++) {
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    /* comeca considerando o primeiro como maior e menor */
    maior = vetor[0];
    menor = vetor[0];

    for (i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("\nMaior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    system("pause");
    return 0;
}
