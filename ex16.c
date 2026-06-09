#include <stdio.h>

int repetição(int, int);

int main() { 
    int numero, soma = 0;
    printf("Escreva um número impar positivo:  ");
    scanf("%d",&numero);

    printf("\n o somatório é: %d", repetição(numero, 1));
}

int repetição(int numero, int contador){
    if(numero == contador){
        return numero;
    }

    if(numero > contador){
        return contador * repetição(numero, contador + 2);
    }

    return 0;
}

