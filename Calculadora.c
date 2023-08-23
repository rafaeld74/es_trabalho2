#include <stdio.h>

// Fun��o para converter um n�mero decimal para bin�rio
void decimalParaBinario(int numero) {
    int binario[32]; // Um n�mero inteiro em C � geralmente representado em 32 bits
    int i = 0;

    if (numero == 0) {
        printf("0 em bin�rio � 0\n");
        return;
    }

    while (numero > 0) {
        binario[i] = numero % 2;
        numero = numero / 2;
        i++;
    }

    printf("%d em bin�rio �: ", numero);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
}

// Fun��o para converter um n�mero decimal para octal
void decimalParaOctal(int numero) {
    int octal[32]; // Um n�mero inteiro em C � geralmente representado em 32 bits
    int i = 0;

    if (numero == 0) {
        printf("0 em octal � 0\n");
        return;
    }

    while (numero > 0) {
        octal[i] = numero % 8;
        numero = numero / 8;
        i++;
    }

    printf("%d em octal �: ", numero);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

int main() {
    int numero;

    printf("Digite um n�mero decimal: ");
    scanf("%d", &numero);

    decimalParaBinario(numero);
    decimalParaOctal(numero);

    return 0;
}
