#include <stdio.h>

int main() {
    char n[100];
    char str[100];
    printf("Digite um número: ");
    fgets(n, sizeof(n), stdin); // lendo número como string
    int n1 = (int)strtol(n, NULL, 10); // convertendo para inteiro
    printf("Digite um texto: ");
    fgets(str, sizeof(str), stdin);
    printf("%d\n", n1);
    printf("%s", str);
    return 0;
}