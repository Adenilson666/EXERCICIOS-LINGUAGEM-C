/*Ler 3 valores (A, B e C) representando as medidas dos lados de um triângulo e escrever se
formam ou não um triângulo. OBS: para formar um triângulo, o valor de cada lado deve ser
menor que a soma dos outros 2 lados.*/

#include <stdio.h>

int main(void) {
    int lado01, lado02, lado03;

    printf("Primeiro Lado: \n");
    scanf("%d", &lado01);

    printf("Segundo Lado: \n");
    scanf("%d", &lado02);

    printf("Terceiro Lado: \n");
    scanf("%d", &lado03);

    if (lado01 + lado02 > lado03 && lado01 + lado03 > lado02 && lado02 + lado03 > lado01) {
        printf("É TRIANGULO");
    } else {
        printf("NÃO É TRIANGULO");
    }
}