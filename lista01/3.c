#include <stdio.h>

long mul(long a, long b) {
    return a*b;
}

int main() {
    long a, b;
    printf("Digite um número inteiro: ");
    scanf("%ld", &a);
    printf("Digite outro número inteiro: ");
    scanf("%ld", &b);
    long produto = mul(a, b);
    printf("%ld vezes %ld é igual a %ld\n", a, b, produto);
    return 0;
}