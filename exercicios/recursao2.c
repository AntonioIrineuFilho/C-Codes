#include <stdio.h>

long pot(int base, int exp) {
    if (exp == 0) {
        return 1;
    } else {
        return base * pot(base, exp-1);
    }
}

int main() {
    int base, exp;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &exp);
    printf("O resultado de %d elevado a %d é %ld\n", base, exp, pot(base, exp));
    return 0;
}