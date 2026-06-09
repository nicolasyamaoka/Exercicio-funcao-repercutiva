#include <stdio.h>

void paresDecrescente(int N) {
    if (N < 0)
        return;

    printf("%d ", N);
    paresDecrescente(N - 2);
}

int main() {
    int N;
    scanf("%d", &N);

    paresDecrescente(N);

    return 0;
}