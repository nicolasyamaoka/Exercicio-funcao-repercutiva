#include <stdio.h>

int exponencial(int, int, int);

int main() { 
    int n, k;
    printf("Escreva um número base:  ");
    scanf("%d",&k);
    printf("Escreva um número expoente:  ");
    scanf("%d",&n);


    printf("\n %d elevado a %d seria: %d", k, n, exponencial(n, k, 1));
}

int exponencial(int expoente, int base, int resultado){
    if(expoente == 1){
        return resultado * base;
    }

    if(expoente > 1){
        return exponencial(expoente - 1, base, resultado * base);
    }

    if(expoente == 0 && base != 0){
    return 1;
    }

    return 0;

}

