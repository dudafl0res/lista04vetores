#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[6];
    int i;

    for (i = 0; i < 6; i++) {
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nValores lidos:\n");
    for (i = 0; i < 6; i++) {
        printf("%d\n", vetor[i]);
    }

    system("pause");
    return 0;
}
