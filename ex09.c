#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[6];
    int i;

    for (i = 0; i < 6; i++) {
        /* repete a leitura enquanto o numero for impar */
        do {
            printf("Digite o %do valor (par): ", i + 1);
            scanf("%d", &vetor[i]);

            if (vetor[i] % 2 != 0) {
                printf("Valor invalido! Digite um numero par.\n");
            }
        } while (vetor[i] % 2 != 0);
    }

    printf("\nValores na ordem inversa:\n");
    for (i = 5; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }

    system("pause");
    return 0;
}
