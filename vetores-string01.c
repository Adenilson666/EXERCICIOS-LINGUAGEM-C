#include <stdio.h>

int main(void) {

    char s[10];

    printf("Digite algo (leitura pelo gets): \n");
    gets(s); /*Não delimita os espaço, ele passa o numero de caracteres declarados no inicio*/
    fflush(stdin);

    puts("Resultado: \n");
    puts(s);
    puts("");

    printf("Digite algo (leitura pelo fgets): \n"); /*Delimita os caracteres*/
    fgets(s, 10, stdin);
    fflush(stdin);

    puts("Resultado: \n");
    puts(s);
    fflush(stdin);
}