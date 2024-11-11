#include <stdio.h>

int main() {
    int numero = 123;
    char str[4]; // Tamanho 4 para 3 dígitos + '\0'
    sprintf(str, "%d", numero);
    printf("Número como string: %c\n", str);
    return 0;
}
