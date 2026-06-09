#include <stdio.h>

void imprime(int, int, int);

int main() { 
    int a, b;
    printf("Escreva um número a:  ");
    scanf("%d",&a);
    printf("Escreva um número b:  ");
    scanf("%d",&b);


    imprime(a, b, a);
}

void imprime(int i, int j, int k){
    if(k == j){
        printf("\n%d", j);
    }

    if(k < j){
        printf("\n%d", k);
        imprime(i, j, k+1);
    }


}

