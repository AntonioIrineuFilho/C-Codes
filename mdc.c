#include <stdio.h>

int main() {
    int n1;
    int n2;
    int menor;
    int mdc;
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    if (n1 <= n2) {
        menor = n1;
    } else {
        menor = n2;
    }
    for (int i = 1; i <= menor; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            mdc = i;
        }
    }
    printf("O MDC entre os dois números é %d", mdc);
    return 0;
}