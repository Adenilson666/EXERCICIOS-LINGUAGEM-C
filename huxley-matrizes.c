#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[3][3];
    int maior_valor = -1000000;
    int soma_diag_principal = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > maior_valor) {
                maior_valor = matriz[i][j];
            }

            if (i == j) {
                soma_diag_principal += matriz[i][j];
            }
        }
    }

    int soma_total = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma_total += matriz[i][j];
        }
    }
    float media = (float) soma_total / 9;

    int delta;
    if (maior_valor > 0) {
        delta = 1;
    } else if (maior_valor < 0) {
        delta = -1;
    } else {
        delta = 0;
    }

    printf("%.2f %d %d %d\n", media, maior_valor, delta, soma_diag_principal);

    return 0;
}
