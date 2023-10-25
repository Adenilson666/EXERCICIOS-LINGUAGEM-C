#include <stdio.h>

int main() {
    FILE *arquivo;
    char linha[100];

    // Abrir o arquivo para leitura
    arquivo = fopen("arquivo.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Ler e exibir o conteúdo do arquivo linha por linha
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }

    // Fechar o arquivo
    fclose(arquivo);

    // Abrir o arquivo para escrita
    arquivo = fopen("arquivo.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Escrever no arquivo
    fprintf(arquivo, "Hello, World!\n");

    // Fechar o arquivo
    fclose(arquivo);

    return 0;
}
