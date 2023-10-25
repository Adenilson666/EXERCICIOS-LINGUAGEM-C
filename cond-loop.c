/*Escreva um algoritmo que leia 10 valores quaisquer. A seguir, mostre quantos deles estão
dentro do intervalo (10,20) e quantos estão fora do intervalo, mostrando essas informações.*/

#include <stdio.h>

int main(void) {

    int v[10];
    int dentro_intervalo = 0, fora_intervalo = 0;

    for (int i=0; i<10; i++) {
        printf("Digite o %d valor: \n", i + 1);
        scanf("%d", &v[i]);
    }

    for (int i=0; i < 10; i++) {
        if (v[i] >= 10 && v[i] <= 20) {
            dentro_intervalo++;
            printf("DENTRO DO INTERVALO(10,20): %d\n", v[i]);
        } else {
            fora_intervalo++;
            printf("FORA DO INTERVALO(10,20): %d\n", v[i]);
        }
    }
    
    printf("TOTAL DE VALORES DENTRO DO INTERVALO: %d\n", dentro_intervalo);
    printf("TOTAL DE VALORES FORA DO INTERVALO: %d\n", fora_intervalo);
}
