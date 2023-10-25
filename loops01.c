/*Leia 5 valores para uma variável A. A seguir mostre quantos valores digitados foram pares,
quantos valores digitados foram ímpares, quantos foram positivos e quantos foram negativos.*/

#include <stdio.h>

int main(void) {
    int a;
    int pares = 0, impares = 0, negativos = 0, positivos = 0;

    for (int i = 0; i <= 4; i++) {
        printf("Digite o %d valor: \n", i + 1);
        scanf("%d", &a);
        
        if (a % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        if (a >= 0) {
            positivos++;
        } else {
            negativos++;
        }
    }
    printf("PARES: %d\n", pares);
    printf("IMPARES: %d\n", impares);
    printf("POSITIVOS: %d\n", positivos);
    printf("NEGATIVOS: %d\n", negativos);
}