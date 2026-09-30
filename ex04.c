#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[8];
    int i, x, y, soma;

    for (i = 0; i < 8; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite a posicao X (de 0 a 7): ");
    scanf("%d", &x);
    printf("Digite a posicao Y (de 0 a 7): ");
    scanf("%d", &y);

    soma = vetor[x] + vetor[y];

    printf("\nSoma dos valores nas posicoes %d e %d = %d\n", x, y, soma);

    system("pause");
    return 0;
}
