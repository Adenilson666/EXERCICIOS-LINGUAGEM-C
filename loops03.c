/*Apresente todos os números divisíveis por 5 que sejam maiores do que 0 e menores ou
iguais a 200.*/

#include <stdio.h>

int main(void) {
    
    for (int i=1; i<=200; i++) {
        if (i % 5 == 0) {
            printf("%d ", i);
        }
    }
}