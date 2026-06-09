#include <stdio.h>

int repetição(int);

int main() { 
    int numero;
    printf("Escreva um número:  ");
    scanf("%d",&numero);

    printf("\n o %d numero de fibonacci seria: %d", numero, repetição(numero - 1));
}

int repetição(int n){
    if(n == 1){
        return 1;
    }

    if(n > 1){
        return repetição(n - 1) + repetição(n - 2);
    }

    return 0;
}

