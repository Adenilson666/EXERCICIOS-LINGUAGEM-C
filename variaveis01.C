/*Escrever um algoritmo que pergunta um valor em metros e imprime o correspondente em
decímetros, centímetros e milímetros.*/

#include <stdio.h>

int main(void) {
    float m, dc, cm, mm;
    printf("Digite um valor em metro: \n");
    scanf("%f", &m);

    dc = m * 10;
    cm = m * 100;
    mm = m * 1000;

    printf("CONVERSOES EM METRO\n");
    printf("Decimetros: %.2fdc\n", dc);
    printf("Centimetros: %.2fcm\n", cm);
    printf("Milmetros: %.2fmm\n", mm);
}