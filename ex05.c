#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[10];
    int i, pares = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            pares++;
        }
    }

    printf("\nQuantidade de valores pares: %d\n", pares);

    system("pause");
    return 0;
}
