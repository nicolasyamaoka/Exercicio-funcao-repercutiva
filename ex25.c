#include <stdio.h>

int tetranacci(int n);

int main() {
    int n;

    printf("Digite a posicao (N):  ");
    scanf("%d", &n);

    printf("O %d-esimo termo da sequencia de Tetranacci eh: %d\n", n, tetranacci(n));

    return 0;
}

int tetranacci(int n) {
    if (n == 1 || n == 2 || n == 3) {
        return 0;
    }
    if (n == 4) {
        return 1;
    }

    return tetranacci(n - 1) + tetranacci(n - 2) + tetranacci(n - 3) + tetranacci(n - 4);
}