#include <stdio.h>
#include <stdlib.h>


int main() {

    // Declarando valores
    int a = 5, b;

    // Imprimindo valores, o "%d" funciona como o format do python, só que serve somente para inteiros
    printf("O valor da variavel a eh %d!!\n", a);

    // Definindo um novo valor a variável
    a = 15;
    printf("O novo valor de a eh %d!!\n", a);

    // Perguntando e definindo um valor a b
    scanf("%d", &b);
    printf("O valor de b eh %d !!\n", b);

    // Exibindo os dois valores de forma organizada
    printf("Logo os valores sao respectivamente a = %d e b = %d!\n", a, b);

    system("pause");
}

