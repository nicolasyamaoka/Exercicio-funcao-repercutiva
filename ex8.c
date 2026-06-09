#include <stdio.h>  

void repetição(int, int);

int main() { 
    int numero;
    printf("Escreva um número:  ");
    scanf("%d",&numero);

    repetição(0, numero);
}

void repetição(int numero, int max){
    if(numero == max){
        printf("%d\n",numero);
    }

    if(numero < max){
        printf("%d\n",numero);
        repetição(numero + 1, max);
    }
}

