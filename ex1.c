#include <stdio.h>

int repetição(int, int);

int main() { 
    int numero, soma = 0;
    printf("Escreva um número:  ");
    scanf("%d",&numero);

    printf("\n o somatório é: %d", repetição(numero, soma));
}

int repetição(int numero, int soma){
    if(numero == 1){
        return soma + 1;
    }

    if(numero > 1){
        return repetição(numero - 1, soma + numero);
    }

    return 0;
}

