#include <stdio.h>

int repetição(int);

int main() { 
    int numero;
    printf("Escreva um número:  ");
    scanf("%d",&numero);

    printf("\nA função do exercicio seria: %d", repetição(numero));

}

int repetição(int n){
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }

    if(n > 1){
        return 2 + repetição(n-1) + 3 + repetição(n-2);
    }

    return 0;
}

