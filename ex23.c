#include <stdio.h>

int repetição(int vet[], int);

int main() { 
    int vetor[5];
    for(int i=0; i<5; i++){
    printf("Escreva um número %d:  ", i);
    scanf("%d",&vetor[i]);
    }

    printf("A soma de seus elementos é: %d", repetição(vetor, 4));
}

int repetição(int vet[], int contador){
    if(contador == 1){
        return vet[0];
    }

    if(contador > 1){
        return vet[contador] + repetição(vet, contador - 1);
    }

}

