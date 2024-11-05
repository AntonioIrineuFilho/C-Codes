#include <stdio.h>

int main() {
    int n;
    int op;
    do {
        printf("Digite um número inteiro: ");
        scanf("%d", &n);
        if (n % 2 == 0) {
            printf("Par.\n");
        } else {
            printf("Impar.\n");
        } 
        printf("Digite 1 para continuar e qualquer número para encerrar: ");
        scanf("%d", &op);
        } while (op == 1);
        return 0;
}