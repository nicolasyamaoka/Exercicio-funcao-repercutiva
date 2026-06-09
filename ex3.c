#include <stdio.h>

int cubos(int, int);

int main() { 
    int numero, soma = 0;
    printf("Escreva um número:  ");
    scanf("%d",&numero);

    printf("\n o somatório é: %d", cubos(numero, soma));
}

int cubos(int numero, int soma){
    if(numero == 1){
        return soma + 1;
    }

    if(numero > 1){
        return cubos(numero - 1, soma +(numero * numero * numero));
    }

    return 0;
}

