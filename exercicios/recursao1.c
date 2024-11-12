#include <stdio.h>

int somaDigitos(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n % 10 + somaDigitos(n / 10);
    }
}

int main() {
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    printf("A soma dos dígitos do número digitado é %d\n", somaDigitos(n));
    return 0;
}