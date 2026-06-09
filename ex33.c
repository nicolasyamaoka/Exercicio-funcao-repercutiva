#include <stdio.h>

void inverterVetor(float [], int , int);

int main() {
    float vetor[100];
    
    for (int i = 0; i < 100; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%f", &vetor[i]);
    }
    
    printf("\nVetor original:\n");
    for (int i = 0; i < 100; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
    

    inverterVetor(vetor, 0, 100 - 1);
    
    printf("\nVetor invertido:\n");
    for (int i = 0; i < 100; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}

void inverterVetor(float vet[], int inicio, int fim){
    if (inicio >= fim) {
        return;
    }
    
    float aux = vet[inicio];
    vet[inicio] = vet[fim];
    vet[fim] = aux;

    inverterVetor(vet, inicio + 1, fim - 1);
}