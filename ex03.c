#include <stdio.h>
#include <stdlib.h>

int main() {
    float numeros[10];
    float quadrados[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o %do numero: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    /* calcula o quadrado de cada numero */
    for (i = 0; i < 10; i++) {
        quadrados[i] = numeros[i] * numeros[i];
    }

    printf("\nVetor original:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f\n", numeros[i]);
    }

    printf("\nVetor dos quadrados:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f\n", quadrados[i]);
    }

    system("pause");
    return 0;
}
