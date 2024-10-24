#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int pc = (rand() % (100 - 1 + 1)) + 1;
    int pl = 0;
    printf("Digite um número de 1 a 100: ");
    scanf("%d", &pl);
    do {
        if (pc == pl) {
            print("Parabéns! Você acertou!\n");
        } else if (pc > pl) {
            printf("Você errou! Mas aqui vai uma dica: o meu número é maior que o seu!\n");
        } else {
            printf("Você errou! Mas aqui vai uma dica: o meu número é menor que o seu!\n");
        }
    } while (pc != pl);
    return 0;
}