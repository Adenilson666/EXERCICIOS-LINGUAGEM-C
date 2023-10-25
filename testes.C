/*
Entrada e Saida de dados

#include <stdio.h>

int main() {

    int idade = 0;
    float peso = 0.0;



    printf("Digite uma idade: ");
    scanf("%d", &idade);

    printf("Digite um peso: ");
    scanf("%f", &peso);

    printf("idade informada: %d \n", idade);
    printf("peso informado: %2.fkg", peso);

}
*/



/*
Variaveis e tipos de dados

#include <stdio.h>

#define texto "Entrada e Saida de Dados"

int main() {
    printf("%s\n", texto);

    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o nome: ");
    scanf("%s", nome);


    printf("Dados informados: \n");
    printf("Idade: %d \n", idade);
    printf("Altura: %.2f \n", altura);
    printf("Nome: %s \n", nome);
}
*/

#include <stdio.h>

int main() {
    int A, B, soma, subtr, mult, divis;

    printf("Digite o primeiro valor: ");
    scanf("%d", &A);
    printf("Digite o segundo valor: ");
    scanf("%d", &B);

    soma = A + B;
    subtr = A - B;
    mult = A * B;
    divis = A / B;

    printf("Resultados: \n");
    printf("Soma: %d", soma);
    printf("Subtração: %d", subtr);
    printf("Multiplicação: %d", mult);
    printf("Dvisão: %d", divis);
}