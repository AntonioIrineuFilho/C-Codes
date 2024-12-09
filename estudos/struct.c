#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    struct Pessoa pessoa1;
    printf("Digite o nome: ");
    scanf("%s", pessoa1.nome);
    printf("Digite o nome: ");
    scanf("%d", &pessoa1.idade);
    printf("Digite o nome: ");
    scanf("%f", &pessoa1.altura);
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Altura: %f\n", pessoa1.altura);

    return 0;
}