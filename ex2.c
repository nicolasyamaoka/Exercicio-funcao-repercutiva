#include <stdio.h>

int fatorial(int, int);

int main() { 
    int numero, produto = 1;
    printf("Escreva um número:  ");
    scanf("%d",&numero);

    printf("\n o somatório é: %d", fatorial(numero, produto));
}

int fatorial(int numero, int produto){
    if(numero == 1){
        return produto;
    }

    if(numero > 1){
        return fatorial(numero - 1, produto * numero);
    }

    return 0;
}

