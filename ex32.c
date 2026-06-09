#include <stdio.h>

void repetição(int);
int divisão(int);

int main() { 
    int numero;
    printf("Escreva um número:  ");
    scanf("%d",&numero);

    printf("\n em binários é: ");
    repetição(numero);
}

void repetição(int numero){
    if(numero < 2){
        printf("%d", divisão(numero));
    }

    if(numero >= 2){
        repetição(numero/2);
        printf("%d", divisão(numero));
    }

}

int divisão(int n){
    if(n%2 == 0){
        return 0;
    } else if (n%2 == 1){
        return 1;
    }
}
