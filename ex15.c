#include <stdio.h>

int repetição(int, int);

int main() { 
    int numero, soma = 0;
    printf("Escreva um número:  ");
    scanf("%d",&numero);

    printf("\n o somatório é: %d", repetição(numero, 1));
}

int repetição(int numero, int contador){
    if(contador == numero){
        return ((1 + (numero * numero)) / numero);
    }

    if(numero > 1){  
        return ((1 + (contador * contador)) / contador) + repetição(numero, contador + 1);
    }

    return 0;
}
