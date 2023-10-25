/*Construir um algoritmo que leia dois números e efetue a adição. Caso o valor somado seja
maior que 20, este deverá ser apresentado somando-se a ele mais 8; caso o valor somado seja
menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.*/

#include <stdio.h>

int main(void) {
    int num01, num02, soma;

    printf("Valor 1: \n");
    scanf("%d", &num01);

    printf("Valor 2: \n");
    scanf("%d", &num02);

    soma = num01 + num02;

    if (soma > 20) {
        soma += 8;
        printf("Valor Final: %d\n", soma);
    }
    else {
        soma -= 5;
        printf("Valor final: %d\n", soma);
    }
}