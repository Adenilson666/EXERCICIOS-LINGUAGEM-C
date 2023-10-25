#include <stdio.h>


int main(void) {
    int i = 0;

    while (i <= 10) {
        printf("%d ", i);
        i++;

        if (i == 8) {
            break;
        }
    }

}


/*APESAR DOS PESARES O "DO" IRA EXECUTARO A VARIAVEL PELO MENOS UMA VEZ, MESMO QUE A CONDIÇÃO ESTEJA INVALIDA*/
/*
int main(void) {
    int i = 1;

    do {
        printf("%d ", i);
        i++;
    } while(i <= 10);
}
*/