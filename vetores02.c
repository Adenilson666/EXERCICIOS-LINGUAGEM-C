#include <stdio.h>

int main(void) {

    int v[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Insira um dado: \n");
        scanf("%d", &v[i]);
    }

    printf("Dados Inseridos \n");

    for (i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }
}