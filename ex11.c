#include <stdio.h>
#include <stdlib.h>

int main() {
    float vetor[10];
    float somaPositivos = 0;
    int negativos = 0;
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o %do numero: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    for (i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            negativos++;
        } else if (vetor[i] > 0) {
            somaPositivos = somaPositivos + vetor[i];
        }
    }

    printf("\nQuantidade de numeros negativos: %d\n", negativos);
    printf("Soma dos numeros positivos: %.2f\n", somaPositivos);

    system("pause");
    return 0;
}
