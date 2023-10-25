/*Criar um algoritmo que a partir da idade e peso do paciente calcule a dosagem de
determinado medicamento e imprima a receita informando quantas gotas do medicamento o
paciente deve tomar por dose. Considere que o medicamento em questão possui 500 mg por
ml, e que cada ml corresponde a 20 gotas.
 Adultos ou adolescentes desde 12 anos, inclusive, se tiverem peso igual ou acima de
60 quilos devem tomar 1000 mg; com peso abaixo de 60 quilos devem tomar 875 mg.
 Para crianças e adolescentes abaixo de 12 anos a dosagem e calculada pelo peso
corpóreo conforme a tabela a seguir:*/

#include <stdio.h>

int main(void) {
    int idade, dosagem;
    float peso;

    printf("Idade: \n");
    scanf("%d", &idade);

    printf("Peso: \n");
    scanf("%f", &peso);

    if (idade >= 12 && peso >= 60) {
        dosagem = 1000 / 25;
        printf("\nBOLETIM\n\nIDADE: %d\nPESO: %.2f\nDOSAGEM: 1000mg = 40 gotas\n", idade, peso);
    } else if (idade >= 12 && peso < 60) {
        dosagem = 875 / 25;
        printf("\nBOLETIM\n\nIDADE: %d\nPESO: %.2f\nDOSAGEM: 875mg = 35 gotas\n", idade, peso);
    } else if (idade < 12 && peso > 30) {
        dosagem = 750 / 25;
        printf("\nBOLETIM\n\nIDADE: %d\nPESO: %.2f\nDOSAGEM: 750mg = 30 gotas\n", idade, peso);
    } else if (idade < 12 && (peso <= 30 && peso >= 24.1)) {
        dosagem = 500 / 25;
        printf("\nBOLETIM\n\nIDADE: %d\nPESO: %.2f\nDOSAGEM: 500mg = 20 gotas\n", idade, peso);
    } else if (idade < 12 && (peso <= 24 && peso >= 16.1)) {
        dosagem = 375 / 25;
        printf("\nBOLETIM\n\nIDADE: %d\nPESO: %.2f\nDOSAGEM: 375mg = 15 gotas\n", idade, peso);
    } else if (idade < 12 && (peso <= 16 && peso >= 9.1)) {
        dosagem = 250 / 25;
        printf("\nBOLETIM\n\nIDADE: %d\nPESO: %.2f\nDOSAGEM: 250mg = 10 gotas\n", idade, peso);
    } else {
        dosagem = 125 / 25;
        printf("\nBOLETIM\n\nIDADE: %d\nPESO: %.2f\nDOSAGEM: 125mg = 5 gotas\n", idade, peso);
    }
}