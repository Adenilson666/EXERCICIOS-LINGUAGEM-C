/*Faça um algoritmo para ler um número que é um código de usuário. Caso este código seja
diferente de um código armazenado internamente no algoritmo (igual a 1234) deve ser
apresentada a mensagem ‘Usuário inválido!’. Caso o Código seja correto, deve ser lido outro
valor que é a senha. Se esta senha estiver incorreta (a certa é 9999) deve ser mostrada a
mensagem ‘senha incorreta’. Caso a senha esteja correta, deve ser mostrada a mensagem
‘Acesso permitido’.*/

#include <stdio.h>

int main(void) {
    int cod_usuario = 1234, ler_cod_usuario, senha = 9999, ler_senha;

    printf("CODIGO DE ACESSO: \n");
    scanf("%d", &ler_cod_usuario);

    if (ler_cod_usuario != cod_usuario) {
        printf("USUARIO INVALIDO\n");
    }

    else {
        printf("SENHA: \n");
        scanf("%d", &ler_senha);
        if (ler_senha != senha) {
            printf("SENHA INCORRETA");
        }

        else {
            printf("ENTRANDO...");
        }
    }
}
