#include <stdio.h>

void paresCrescente(int N) {
    if (N < 0)
        return;

    paresCrescente(N - 2);
    printf("%d ", N);
}

int main() {
    int N;
    scanf("%d", &N);

    paresCrescente(N);

    return 0;
}