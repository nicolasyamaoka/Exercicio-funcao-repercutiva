#include <stdio.h>

int soma(int, int, int);

int main() { 
    int a, b;
    printf("Escreva um número a:  ");
    scanf("%d",&a);
    printf("Escreva um número b:  ");
    scanf("%d",&b);


    printf("\n A soma desse intervalo é: %d", soma(a, b, a));
}

int soma(int i, int j, int k){
    if(k == j){
        return j;
    }

    if(k < j){
        return k + soma(i, j, k + 1);
    }

    return 0;
}

