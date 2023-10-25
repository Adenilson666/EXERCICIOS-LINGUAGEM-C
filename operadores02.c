#include <stdio.h>

int main(void) {
    int dado = 10;
    printf("Dado antes do incremento: %d\n", dado);

    dado++;
    printf("Dados após incremento: %d\n", dado);

    dado--;
    printf("Dados após decremento: %d\n", dado);

    dado += 3;
    printf("Dado após incremento de 3 unidades: %d\n", dado);

    dado -= 2;
    printf("Dado após o decremento de 2: %d\n", dado);

    dado *= 10;
    printf("Dado após multiplicar por dez: %d\n", dado);

}