/*Faça um algoritmo que receba quatro números inteiros, calcule e mostre a soma desses
números.*/

#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4, calc;

    printf("Primeiro Valor: \n");
    scanf("%d", &n1);

    printf("Segundo Valor: \n");
    scanf("%d", &n2);

    printf("Terceiro Valor: \n");
    scanf("%d", &n3);

    printf("Quarto Valor: \n");
    scanf("%d", &n4);

    calc = (n1 + n2) + (n3 + n4); 

    printf("SOMA TOTAL: %d\n", calc);
}