#include <stdio.h>

int main(void) {
    int A, B, soma, sub, mult, div;
    printf("Digite o valor de A: \n");
    scanf("%d", &A);
    printf("Digite o valor de B: \n");
    scanf("%d", &B);

    printf("RESULTADOS: \n");
    soma = A + B;
    printf("%d + %d = %d\n", A, B, soma);

    sub = A - B;
    printf("%d - %d = %d\n", A, B, sub);

    mult = A * B;
    printf("%d * %d = %d\n", A, B, mult);

    div = A / B;
    printf("%d / %d = %d\n", A, B, div);
}