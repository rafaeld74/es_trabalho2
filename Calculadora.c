#include <stdio.h>

void decimalParaBinario(int numero) {
    int binario[32];
    int i = 0;

    if (numero == 0) {
        printf("0 em binário é 0\n");
        return;
    }

    while (numero > 0) {
        binario[i] = numero % 2;
        numero = numero / 2;
        i++;
    }

    printf("%d em binário é: ", numero);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
}

// Função para converter um número decimal para octal
void decimalParaOctal(int numero) {
    int octal[32]; // Um número inteiro em C é geralmente representado em 32 bits
    int i = 0;

    if (numero == 0) {
        printf("0 em octal é 0\n");
        return;
    }

    while (numero > 0) {
        octal[i] = numero % 8;
        numero = numero / 8;
        i++;
    }

    printf("%d em octal é: ", numero);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

// Função para converter um número decimal para hexadecimal
void decimalParaHexadecimal(int numero) {
    char hexadecimal[32]; // Um número inteiro em C é geralmente representado em 32 bits
    int i = 0;

    if (numero == 0) {
        printf("0 em hexadecimal é 0\n");
        return;
    }

    while (numero > 0) {
        int resto = numero % 16;
        if (resto < 10) {
            hexadecimal[i] = resto + '0'; // Converte para dígito de 0 a 9
        } else {
            hexadecimal[i] = resto - 10 + 'A'; // Converte para letra de A a F
        }
        numero = numero / 16;
        i++;
    }

    printf("%d em hexadecimal é: ", numero);
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}

int main() {
    int numero;

    printf("Digite um número decimal: ");
    scanf("%d", &numero);

    decimalParaBinario(numero);
    decimalParaOctal(numero);
    decimalParaHexadecimal(numero);

    return 0;
}
