/*Calcule e mostre a soma dos números pares entre 1 e 100, inclusive.*/

#include <stdio.h>

int main(void) {
    int soma = 0, impares = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            soma += i;
        } else {
            impares += i;
        }
    }

    printf("A soma dos numeros pares de 1 a 100: %d\n", soma);
    printf("A soma dos numeros impares de 1 a 100: %d\n", impares);
}