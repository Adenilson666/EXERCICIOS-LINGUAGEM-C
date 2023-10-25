#include <stdio.h>

int main(void) {

    char s[20];

    printf("Digite algo (scanf convencional): \n");
    scanf("%s", s);
    fflush(stdin);

    printf("Resultado: %s\n\n", s);

    printf("Digite algo (scanf aprimorado): \n");
    scanf("%19[^\n]s", s);
    fflush(stdin);

    printf("Resultado: %s\n\n", s);
}