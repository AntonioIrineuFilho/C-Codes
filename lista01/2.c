#include <stdio.h>

int main() {
    char nome[100];
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Olá %s, bem-vindo(a) ao mundo da linguagem de programação C! ", nome);
    return 0;
}
