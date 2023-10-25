#include <stdio.h>

int main(void) {
    int d;

    printf("Digite um dia da semana: \n");
    scanf("%d", &d);

    switch (d)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda\n");
        break;
    case 3:
        printf("Terça\n");
        break;
    case 4:
        printf("Quarta\n");
        break;
    case 5:
        printf("Quinta\n");
        break;
    case 6:
        printf("Sexta\n");
        break;
    case 7:
        printf("Sabado\n");
        break;
    default:
        printf("Valor Invalido\n");
        break;
    }
}