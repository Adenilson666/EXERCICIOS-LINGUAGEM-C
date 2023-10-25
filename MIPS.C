#include <stdio.h>

float convertToFahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int nthEvenNumber(int n) {
    return 2 * n;
}

void menu() {
    int choice, n;
    float temperature;

    do {
        printf("\nMenu de opções:\n");
        printf("1 - Fahrenheit -> Celsius\n");
        printf("2 - Fibonacci\n");
        printf("3 - enésimo número par\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nDigite a temperatura em Fahrenheit: ");
                scanf("%f", &temperature);
                printf("A temperatura em Celsius é: %.2f\n", convertToCelsius(temperature));
                break;
            case 2:
                printf("\nDigite o valor de N: ");
                scanf("%d", &n);
                printf("O %dº termo da sequência de Fibonacci é: %d\n", n, fibonacci(n));
                break;
            case 3:
                printf("\nDigite o valor de N: ");
                scanf("%d", &n);
                printf("O %dº número par é: %d\n", n, nthEvenNumber(n));
                break;
            case 4:
                printf("\nEncerrando o programa...\n");
                break;
            default:
                printf("\nOpção inválida. Por favor, escolha uma opção válida.\n");
                break;
        }
    } while (choice != 4);
}

int main() {
    menu();

    return 0;
}
