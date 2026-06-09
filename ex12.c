#include <stdio.h>

int repetição(int vet[], int);

int main() { 
    int vetor[5];
    for(int i=0; i<5; i++){
    printf("Escreva um número %d:  ", i);
    scanf("%d",&vetor[i]);
    }

    printf("O menor valor seria: %d", repetição(vetor, 4));
}

int repetição(int vet[], int contador){
    if(contador == 1){
        if(vet[contador] <= vet[contador-1]){
            return vet[contador];
        } else {
            return vet[contador-1];
        }
    }

    int menor_do_resto = repetição(vet, contador - 1);

    if(contador > 1){
        if(vet[contador] <= menor_do_resto){
            return vet[contador];
        } else {
            return menor_do_resto;
        }
    }

    return vet[contador];
}

