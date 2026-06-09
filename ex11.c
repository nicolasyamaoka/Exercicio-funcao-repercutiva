#include <stdio.h>

void repetição(int vet[], int);

int main() { 
    int vetor[10];
    for(int i=0; i<10; i++){
    printf("Escreva um número %d:  ", i);
    scanf("%d",&vetor[i]);
    }

    repetição(vetor, 10-1);
}

void repetição(int vet[], int numero){

    if(numero >= 0){
        printf("%d\n",vet[numero]);
        repetição(vet, numero - 1);
        
    }
}


