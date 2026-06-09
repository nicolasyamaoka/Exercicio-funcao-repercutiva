#include <stdio.h>

int fibg(int, int, int);

int main() {
    int f0, f1, n;

    scanf("%d %d %d", &f0, &f1, &n);

    printf("%d\n", fibg(f0, f1, n));

    return 0;
}

int fibg(int f0, int f1, int n) {
    if (n == 0)
        return f0;

    if (n == 1)
        return f1;

    return fibg(f0, f1, n - 1) + fibg(f0, f1, n - 2);
}
