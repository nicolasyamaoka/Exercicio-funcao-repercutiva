#include <stdio.h>  

void repetição(int);

int main() { 
    int numero;
    printf("Escreva um número:  ");
    scanf("%d",&numero);

    repetição(numero);
}

void repetição(int numero){
    if(numero == 0){
        printf("0\n");
    }

    if(numero > 0){
        repetição(numero - 1);
        printf("%d\n",numero);
    }
}

