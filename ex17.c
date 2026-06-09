#include <stdio.h>

int fatorial(int);

int main() { 
    int numero;
    printf("Escreva um número positivo:  ");
    scanf("%d",&numero);

    printf("\n o fatorial é: %d", (fatorial(2 * numero)) / fatorial(numero));
}

int fatorial(int numero){
    if(numero == 1){
        return 1;
    }

    if(numero > 1){
        return numero * fatorial(numero - 1);
        }
}
