/*Faça um algoritmo que receba três notas e seus respectivos pesos, calcule e mostre a
média ponderada dessas notas.*/

#include <stdio.h>

int main(void) {
    float nota01, nota02, nota03, media;

    printf("Primeira Nota: \n");
    scanf("%f", &nota01);

    printf("Segunda Nota: \n");
    scanf("%f", &nota02);

    printf("Terceira Nota: \n");
    scanf("%f", &nota03);

    media = (nota01 + nota02 + nota03) / 3;

    printf("Media Final: %.2f\n", media);
}