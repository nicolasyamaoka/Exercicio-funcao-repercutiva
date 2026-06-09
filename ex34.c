#include <stdio.h>


void imprimirInvertido(int);

int main() {
    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    printf("O numero invertido eh: ");
    if (numero == 0) {
        printf("0");
    } else {
        imprimirInvertido(numero);
    }
    printf("\n");
    
    return 0;
}

void imprimirInvertido(int n) {
    if (n == 0) {
        return;
    }
    
    printf("%d", n % 10);
    
    imprimirInvertido(n / 10);
}