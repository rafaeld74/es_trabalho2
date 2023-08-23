#include <stdio.h>


void decimalParaBinario(int numero) {
    int binario[32];
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

int main() {
    int numero;

    printf("Digite um n�mero decimal: ");
    scanf("%d", &numero);

    decimalParaBinario(numero);

    return 0;
}
