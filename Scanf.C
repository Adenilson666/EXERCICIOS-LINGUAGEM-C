#include <stdio.h>

int main() {
    int idade = 0;
    float peso = 0.0;

    printf("Digite uma idade: \n");
    scanf("%d", &idade);

    printf("Digite seu peso: \n");
    scanf("%f", &peso);

    printf("Idade informada: %d.\n", idade);
    printf("Peso Informado: %.2fkg.\n", peso);

}
