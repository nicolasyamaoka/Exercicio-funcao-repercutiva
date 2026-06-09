#include <stdio.h>

int repetição(int);

int main() { 
    int numero;
    printf("Escreva um número:  ");
    scanf("%d",&numero);

    printf("\nA função do exercicio seria: %d", repetição(numero));

}

int repetição(int n){

    switch (n) {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        return 2;
    }

    if(n > 2){
        return repetição(n-1) + repetição(n-2) + repetição(n-3);
    }

    return 0;
}

