#include <stdio.h>

int main() {
    int cont = 1;
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
        if (i == 5) {
            printf("\n");
        }
    }
    while (cont <= 5) {
        printf("%d ", cont);
        cont++;
        if (cont > 5) {
            printf("\n");
        }
    }
    cont = 1;
    do {
        printf("%d ", cont);
        cont++;
        if (cont > 5) {
            printf("\n");
        }
    } while (cont <= 5);

    // estrutura continue

    for (int i = 0; i < 10; i++) {
    if (i == 5) {
        continue; // pula a iteração quando essa condição for verdadeira, ou seja, não vai printar o 5
    }
    printf("i = %d\n", i);
    }

    return 0;
}