#include <stdio.h>

int main() {
    int n;
    printf("Digite um número inteiro(1, 2, ou 3): ");
    scanf("%d", &n);
    switch (n) {
        case 1:
            printf("O número é 1.\n");
            break;
        case 2:
            printf("O número é 2.\n");
            break;
        case 3:
            printf("O número é 3.\n");
            break;
        default:
            printf("O número é diferente de 1, 2 ou 3.\n");
            break;
    }
    return 0;
}