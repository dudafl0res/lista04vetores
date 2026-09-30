#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[6];
    int soma, i;

    /* (a) atribui os valores ao vetor */
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    /* (b) soma das posicoes 0, 1 e 5 */
    soma = A[0] + A[1] + A[5];
    printf("Soma de A[0] + A[1] + A[5] = %d\n", soma);

    /* (c) muda a posicao 4 para 100 */
    A[4] = 100;

    /* (d) mostra cada valor em uma linha */
    printf("\nValores do vetor A:\n");
    for (i = 0; i < 6; i++) {
        printf("%d\n", A[i]);
    }

    system("pause");
    return 0;
}
