#include <stdio.h>

struct Contato {
    char nome[50];
    char telefone[15];
    char email[50];
    char adress[50];
};

void inserirContato(struct Contato agenda[], int tamanho, int *indice) {
    if (*indice == tamanho) {
        printf("Limite da agenda alcançado.");
    } else {
        printf("Digite o nome: ");
        scanf("%s", agenda[*indice].nome);
        printf("Digite o telefone: ");
        scanf("%s", agenda[*indice].telefone);
        printf("Digite o email: ");
        scanf("%s", agenda[*indice].email);
        printf("Digite o endereço: ");
        scanf("%s", agenda[*indice].adress);
        (*indice)++;
    }
}

void listarContatos(struct Contato agenda[], int tamanho, int totalContatos) {
    for (int i = 0; i < totalContatos; i++) {
        printf("Nome: %s Telefone: %s Email: %s Endereço: %s\n", agenda[i].nome, agenda[i].telefone, agenda[i].email,agenda[i].adress);
    }
}

void atualizarContato(struct Contato agenda[], int tamanho) {
    int i;
    printf("Digite o índice do contato: ");
    scanf("%d", &i);
    printf("Atualize o nome: ");
    scanf("%s", agenda[i].nome);
    printf("Atualize o telefone: ");
    scanf("%s", agenda[i].telefone);
    printf("Atualize o email: ");
    scanf("%s", agenda[i].email);
    printf("Atualize o endereço: ");
    scanf("%s", agenda[i].adress);
}

void deletarContato(struct Contato agenda[], int *tamanho, int *indice) {
    int i;
    printf("Digite o índice do contato: ");
    scanf("%d", &i);
    for (int j = i; j < *tamanho - 1; j++) {
        agenda[j] = agenda[j+1];
    }
    (*indice)--;
}

int main() {
    int numContatos;
    int op;
    int run = 1;
    int indice = 0;
    printf("Digite o número de contatos desejado para a agenda: ");
    scanf("%d", &numContatos);
    struct Contato agenda[numContatos];
    while (run == 1) {
        op = 0;
        printf("1-Inserir contato\n2-Listar contatos\n3-Atualizar contato\n4-Deletar contato\n5-Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &op);
        switch(op) {
            case 1:
                inserirContato(agenda, numContatos, &indice);
                break;
            case 2:
                listarContatos(agenda, numContatos, indice);
                break;
            case 3:
                atualizarContato(agenda, numContatos);
                break;
            case 4:
                deletarContato(agenda, &numContatos, &indice);
                break;
            case 5:
                printf("FIM DE EXECUÇÃO.");
                run = 0;
                break;
            default:
                printf("Opção inválida.");
                break;
        }
    }
    return 0;
}