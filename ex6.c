#include <stdio.h>

int repetição(int, int);

int main() { 
    int a, b;
    printf("Escreva um número a:  ");
    scanf("%d",&a);
    printf("Escreva um número b:  ");
    scanf("%d",&b);


    printf("\n o produto dos dois seria: %d", repetição(a, b));
}

int repetição(int a, int b){
    if(a == 1){
        return b;
    }

    if(a > 1){
        return b + repetição(a - 1, b);
    }

    return 0;
}

